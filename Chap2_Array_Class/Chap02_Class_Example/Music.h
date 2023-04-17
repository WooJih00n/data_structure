#pragma once
#include <iostream>
#include <string>
#include<vector>
using namespace std;

class Music {
private:
	string title;
	string artist;
	string album;
	int year;

public:
	Music(string title, string artist, string album, int year) {
		this->title = title;
		this->artist = artist;
		this->album = album;
		this->year = year;


	}
	string getTitle() {
		return title;

	}
	string getAlbum() {
		return album;

	}
	string getArtist() {
		return artist;

	}
	int getYear() {
		return year;

	}
};

class MusicStreamingService {
private:
	string serviceName;
	vector<Music> musicList; //리스트(배열)연산 배열의 요소는 Music이다.

public:
	MusicStreamingService(string service);
	void addMusic(string title, string artist, string album, int year) {
		Music newMusic(title, artist, album, year);
		musicList.push_back(newMusic);//vector의 함수로 뒷칸에 하나씩 넣어주는 함수
		cout << title << "by" << artist << "added to" << serviceName << endl;

	}
	//title로  musicList검색하여 반환
	Music* searchByTitle(string title) {
		for (int i = 0; i < musicList.size(); i++) {
			if (musicList[i].getTitle() == title) {
				return &musicList[i];
			}
		}
		return NULL;
	}
	//artist로 musicList에서 검색하여 반환
	vector<Music*> searchByArtist(string artist) {
		vector<Music*>  result;
		for (int i = 0; i < musicList.size(); i++) {
			if (musicList[i].getArtist() == artist) {
				result.push_back(&musicList[i]);
			}
		}
		return result;
	};
};
