#pragma once
#include"TLine.h"
#include"TBase.h"
#include"TLine.h"
#include<vector>

class Plex {
private:
	TBase* start;
	class BadTypeString {};
	class BadSizeStack {};
	class BadNamePoints {};
public:
	Plex(TLine* tmp = nullptr);
	Plex(const Plex & tmp);
	Plex &operator=(const Plex & tmp);
	~Plex() {
		delete start;
	}
	void InsertLine(TLine* le, TLine* ri);
	void addLine(TLine* tm);

	TLine* SearchLineWithPoint(const std::string & name);
	TLine* SearchLineWithPoint(int x, int y);

	TPoint* SearchPoint(const std::string & name);
	TPoint* SearchPoint(int x, int y);

	void reColor(int c);
	void Move(int dx, int dy);
	void Draw(System::Drawing::Graphics^ g);
	bool Empty()const;
	void saveGraph();
	void saveFile();
	void readFile(const std::string &fileName);
	std::pair < std::vector<TPoint*>, std::vector<TLine*> > getPointsAndLines();
};

/*
#include"TLine.h"
#include"TBase.h"
#include"TLine.h"
#include<fstream>
#include<iostream>
#include<sstream>
#include<vector>
#include<stack>
#include<cassert>
#include<set>
#include <vector>
class Plex {
private:
	class BadTypeString {};
	class BadSizeStack {};
	class BadNamePoints {};
	TBase* start;
public:
	Plex(TLine* tmp = nullptr);
	Plex(const Plex& tmp);
	Plex& operator=(const Plex& tmp);
	~Plex() {
		delete start;
	}
	void InsertLine(TLine* le, TLine* ri); //присоединить линию за точку к плексу
	void addLine(TLine* tm); //добавить линию в плекс 

	TLine* SearchLineWithPoint(const std::string& name); //поиск линии в плексе по имени точки, входящей в нее 
	TLine* SearchLineWithPoint(int x, int y);//найти линию в плексе, ближайшую к точке

	TPoint* SearchPoint(const std::string& name); //поиск точки в плексе по имен
	TPoint* SearchPoint(int x, int y); //найти точку в плексе по координатам
	
	void Move(int dx, int dy); //подвинуть всю структуру
	void Draw(System::Drawing::Graphics^ g);
	void reColor(int c);
	void readFile(const std::string& fileName);
	std::pair < std::vector<TPoint*>, std::vector<TLine*> > getPointsAndLines();
	bool Empty()const;
	//void saveGraph();
	void saveFile();
};
*/
