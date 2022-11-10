#pragma once
#include<iostream>
#include<string>

using namespace std;

class InventoryItem
{
private:
	int serialNum;
	string manufactDate;
	int lotNum;
public:
	InventoryItem()
	{
		serialNum = 0;
		manufactDate = " ";
		lotNum = 0;
	}
	InventoryItem(int num, string date, int lot)
	{
		serialNum = num;
		manufactDate = date;
		lotNum = lot;
	}
	void setserialNum(int num)
	{
		serialNum = num;
	}
	void setmanufactDate(string date)
	{
		manufactDate = date;
	}
	void setlotNum(int lot)
	{
		lotNum = lot;
	}
	int getserialNum()const
	{
		return serialNum;
	}
	string getmanufactDate()const
	{
		return manufactDate;
	}
	int getlotNum()const
	{
		return lotNum;
	}
};

