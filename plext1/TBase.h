#pragma once
#include<string>
#include<string>
//�������� �������� ����� �����
enum TypeFigure { _Point, _Line, _Rectangle, _Curve };

class TBase 
{
protected:
	TypeFigure Figure;// ��� ������, �������� : ������������� ��������
	std::string Name; // ��� ������
	bool Visible; // ��������� 
	int Col; // ����
	int R; // ������ ������� ����������
	int Width; // ������
	int Rat; // �������
public:
	TBase(TypeFigure _type = _Point, std::string _name = "", int _r = 7, bool _visible = true,
		int _color = 0, int _width = 15, int _rating = 1) :
		Figure(_type), Name(_name), Visible(_visible), Col(_color), R(_r),
		Width(_width), Rat(_rating) {};
	virtual ~TBase() {};
	TBase(const TBase& tmp);
	/******��������� �������� ����� ������*****/
	TypeFigure GetType() const;
	bool GetVisability() const;
	int GetWidth() const;
	int GetRating() const;
	std::string GetName() const;
	int GetColor() const;
	/*****��������� �������� ����� ������****/
	void SetColor(int _c);
	void SetWidth(int _width);
	void SetVisability(bool _vis);

	virtual void IncRating() = 0; //  �������������� �������, �� ����� ����� ������ 3
	virtual void Draw(System::Drawing::Graphics^ g) = 0; // ���������
	virtual bool IsFigure(int _x, int _y) = 0; //������ �� ���������� � �����-���� ������
	virtual std::string to_string() = 0; // �������� ����������� � ������ � ������������
};


