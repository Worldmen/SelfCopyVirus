#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

void selfCopy() {
	ifstream myDir;
	string label/*, ownPath(path)*/;
	const char* legitPath;
	int labelsize;
	system("dir /B > showMeMyDir.txt");
	myDir.open("showMeMyDir.txt");
	while(myDir >> label) {
		labelsize = label.size();
		if(label[labelsize - 3] == '.' || label[labelsize - 4] == '.')
			continue;
		//ownPath += "\ ";
		//ownPath.erase(ownPath.size() - 1, 1);
		//ownPath += label;
		label.insert(0, "cd ");
		legitPath = label.c_str();
		system(legitPath);
		system("cd");
		selfCopy();
	}
	myDir.close();
}


int main() {
	//system("cd D:\Programowanie\GitVisual");
	////const char* path = "C:";
	////system("echo C: > timeFile.txt");
	////ifstream timeFile;
	////timeFile.open("timeFile.txt");
	////timeFile >> path;
	//system("D:");
	//selfCopy();
	system("cd D:\\Programowanie\\GitVisual && dir");
	system("cd");

	return 0;
}

