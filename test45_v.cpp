#include <iostream>
#include <vector>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc_c.h"
#include "fstream"
#include <direct.h>
#include <io.h>
#include <Windows.h>

using namespace std;
using namespace cv;

extern int readDir(char *dirName, vector<string> &filesName);





int test45v_0(int argc, char *argv[])
{
	
	string imgpath = "E:\\���Ʒ���12\\plate-val\\0-����-plate";
	string txtpath = "E:\\���Ʒ���12\\plate-val\\0.txt";
	                                   int label =0;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead �ļ����ݴ򿪴���" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL��\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
}
int test45v_1(int argc, char *argv[])
{
	string imgpath = "E:\\���Ʒ���12\\plate-val\\1-�����ڵ�-plate";
	string txtpath = "E:\\���Ʒ���12\\plate-val\\1.txt";
	                                 int label = 1;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead �ļ����ݴ򿪴���" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL��\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
}
int test45v_2(int argc, char *argv[])
{
	string imgpath = "E:\\���Ʒ���12\\plate-val\\2-����-plate";
	string txtpath = "E:\\���Ʒ���12\\plate-val\\2.txt";
	int label =2;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead �ļ����ݴ򿪴���" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL��\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
}
int test45v_3(int argc, char *argv[])
{
	string imgpath = "E:\\���Ʒ���12\\plate-val\\3_ˮӡ����-plate";
	string txtpath = "E:\\���Ʒ���12\\plate-val\\3.txt";
	                                   int label =3;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead �ļ����ݴ򿪴���" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL��\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
}
int test45v_4(int argc, char *argv[])
{
	string imgpath = "E:\\���Ʒ���12\\plate-val\\4-���²�ȱ-plate";
	string txtpath = "E:\\���Ʒ���12\\plate-val\\4.txt";
	                                  int label = 4;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead �ļ����ݴ򿪴���" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL��\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
}

int test45v_5(int argc, char *argv[])
{
	string imgpath = "E:\\���Ʒ���12\\plate-val\\5-���Ҳ�ȱ-plate";
	string txtpath = "E:\\���Ʒ���12\\plate-val\\5.txt";
	                                 int label = 5;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead �ļ����ݴ򿪴���" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL��\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
}

int test45v_6(int argc, char *argv[])
{
	string imgpath = "E:\\���Ʒ���12\\plate-val\\6-ģ��-plate";
	string txtpath = "E:\\���Ʒ���12\\plate-val\\6.txt";
	                                 int label = 6;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead �ļ����ݴ򿪴���" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL��\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
}

int test45v_7(int argc, char *argv[])
{
	string imgpath = "E:\\���Ʒ���12\\plate-val\\7_�ع⳵��-plate";
	string txtpath = "E:\\���Ʒ���12\\plate-val\\7.txt";
	                                  int label = 7;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead �ļ����ݴ򿪴���" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL��\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;

}

int test45v_8(int argc, char *argv[])
{
	string imgpath = "E:\\���Ʒ���12\\plate-val\\8-�ǳ���-plate";
	string txtpath = "E:\\���Ʒ���12\\plate-val\\8.txt";
	                                 int label = 8;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead �ļ����ݴ򿪴���" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL��\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
}

int test45v_9(int argc, char *argv[])
{
	string imgpath = "E:\\���Ʒ���12\\plate-val\\1_�����ڵ�-plate";
	string txtpath = "E:\\���Ʒ���12\\plate-val\\1-2.txt";
	                                int label = 1;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead �ļ����ݴ򿪴���" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL��\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;

}

int test45v_10(int argc, char *argv[])
{
	string imgpath = "E:\\���Ʒ���6\\0src-6train\\src-roival\\10-����";
	string txtpath = "E:\\���Ʒ���6\\0src-6train\\src-roival\\10.txt";
	int label = 10;

	fstream finWrite;
	finWrite.open(txtpath, ios::out);
	if (!finWrite.is_open())
	{
		cout << "finRead �ļ����ݴ򿪴���" << endl;
		system("pause");
		return false;
	}

	vector<string> v_img_; int num = 0;

	readDir((char*)imgpath.c_str(), v_img_);

	for (int i = 0; i<v_img_.size(); i++)
	{
		string fullname = v_img_[i];

		Mat img = imread(fullname.c_str());
		if (img.data == NULL)
		{
			printf("img.data = NULL��\n");
			system("pause");
			continue;
		}

		//cout << fullname.c_str() << endl;

		finWrite << fullname.c_str() << " " << label << endl;

	}

	finWrite.close();

	return 0;
}

void readFilev(string Path, FILE* f)
{
	ifstream ReadFile;
	ReadFile.open(Path, ios::in);
	if (ReadFile.fail())//�ļ���ʧ��:����0  
	{
		printf("�ļ���ʧ��:\n");
		return;
	}
	else//�ļ�����  
	{
		string tmp;
		while (getline(ReadFile, tmp, '\n'))
		{
			fprintf(f, "%s\n", tmp.c_str());
		}
		ReadFile.close();

	}
}

int test45v_txt(int argc, char *argv[])
{
	int  nclass = 10;
	string save_dir = "E:\\���Ʒ���12\\plate-val\\all.txt";
	argv[2] = "E:\\���Ʒ���12\\plate-val\\0.txt";
	argv[3] = "E:\\���Ʒ���12\\plate-val\\1.txt";
	argv[4] = "E:\\���Ʒ���12\\plate-val\\2.txt";
	argv[5] = "E:\\���Ʒ���12\\plate-val\\3.txt";
	argv[6] = "E:\\���Ʒ���12\\plate-val\\4.txt";
	argv[7] = "E:\\���Ʒ���12\\plate-val\\5.txt";
	argv[8] = "E:\\���Ʒ���12\\plate-val\\6.txt";
	argv[9] = "E:\\���Ʒ���12\\plate-val\\7.txt";
	argv[10] = "E:\\���Ʒ���12\\plate-val\\8.txt";
	argv[11] = "E:\\���Ʒ���12\\plate-val\\1-2.txt";
	/*
	
	argv[12] = "E:\\���Ʒ���6\\0src-6train\\src-roival\\10.txt";*/


	FILE* f = fopen(save_dir.c_str(), "w");
	for (int i = 2; i<nclass+2; i++)
	{
		string Path = argv[i];
		readFilev(Path, f);
	}
	fclose(f);
	return 0;
}
int test45_v(int argc, char *argv[])
{
	test45v_0(argc, argv);
	test45v_1(argc, argv);
	test45v_2(argc, argv);
	test45v_3(argc, argv);
	test45v_4(argc, argv);
	test45v_5(argc, argv);
	test45v_6(argc, argv);
	test45v_7(argc, argv);
	test45v_8(argc, argv);
	test45v_9(argc, argv);

	/*
	
	test45v_10(argc, argv);*/
	


	test45v_txt(argc, argv);

	return 0;
}

