#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
using namespace std;
int count1,count2,count3,count4,count5,count;
class School{
	public:
	char name[20];
	int rollno,cl;
	float marks,total;
	void addstudent();
	char * getname(){ return name; }
	int getrollno(){ return rollno; }
	int getclass(){ return cl; }
	float getmarks(){ return marks; }
	float gettotal(){ return total; }
	void edit();
	void show();
	void header();
	void listview();
	void deletestudent();
	void countstudents();
	void searchbyname();
	void searchbyclass();
	void searchbyrollno();
	void highachievers();
	void failures();	
}s;
void School::countstudents(){
	count1=0;
	count2=0;
	count3=0;
	count4=0;
	count5=0;
	ifstream fin1("1-Students.txt");
	while(fin1.read((char*)&s,sizeof(s))){
	count1++;}
	ifstream fin2("2-Students.txt");
	while(fin2.read((char*)&s,sizeof(s))){
	count2++;}
	ifstream fin3("3-Students.txt");
	while(fin3.read((char*)&s,sizeof(s))){
	count3++;}
	ifstream fin4("4-Students.txt");
	while(fin4.read((char*)&s,sizeof(s))){
	count4++;}
	ifstream fin5("5-Students.txt");
	while(fin5.read((char*)&s,sizeof(s))){
	count5++;}	
	count=count1 + count2 + count3 + count4 + count5;
	}
void drawline(char ch){							                    			
	for(int i=1; i<=72; i++){
	if(i<=48)
	cout<<" ";
	else
	cout<<ch;}
	cout<<endl;
}
void heading(){	
	system("cls");
	system("color 70");
	cout<<"\n\n\n";								                   			
	drawline('*');
	cout<<"\t\t\t\t\t\tSchool Management System\n";
	drawline('*');
	cout<<endl;
}
void School::header(){
	cout<<left<<setw(15)<<"Name "<<setw(15)<<"Roll number  "<<setw(7)<<"Marks "<<setw(7)<<"Total "<<setw(5)<<"Class "<<endl;
	for(int i=1; i<=49; i++)
	cout<<"=";
	cout<<endl;
}
void School::listview(){
	cout<<left<<setw(15)<<name<<left<<setw(15)<<rollno <<left<<setw(7)<<marks<<left<<setw(7)<<total<<left<<setw(5)<<cl;
	cout<<endl;
}
void viewstudent1(){
	heading();
	ifstream fin("1-Students.txt");
	int rec=0;
	while(fin.read((char*)&s,sizeof(s))){
	if(rec<1)
	s.header();
	s.listview();
	rec++;}
	fin.close();
	cout<<"\nTotal "<<rec<<" records in the file so far \n";
}
void viewstudent2(){
	heading();
	ifstream fin("2-Students.txt");
	int rec=0;
	while(fin.read((char*)&s,sizeof(s))){
	if(rec<1)
	s.header();
	s.listview();
	rec++;}
	fin.close();
	cout<<"\nTotal "<<rec<<" records in the file so far \n";
}
void viewstudent3(){
	heading();
	ifstream fin("3-Students.txt");
	int rec=0;
	while(fin.read((char*)&s,sizeof(s))){
	if(rec<1)
	s.header();
	s.listview();
	rec++;}
	fin.close();
	cout<<"\nTotal "<<rec<<" records in the file so far \n";
}
void viewstudent4(){
	heading();
	ifstream fin("4-Students.txt");
	int rec=0;
	while(fin.read((char*)&s,sizeof(s))){
	if(rec<1)
	s.header();
	s.listview();
	rec++;}
	fin.close();
	cout<<"\nTotal "<<rec<<" records in the file so far \n";
}
void viewstudent5(){
	heading();
	ifstream fin("5-Students.txt");
	int rec=0;
	while(fin.read((char*)&s,sizeof(s))){
	if(rec<1)
	s.header();
	s.listview();
	rec++;}
	fin.close();
	cout<<"\nTotal "<<rec<<" records in the file so far \n";
}
void viewstudent(){
	int x=1;
	while(x!=0){
	start:
	heading();
	cout<<"Enter class (1 to 5), Press 0 to go back : ";
	cin>>x;
	if(x==1){ 
	viewstudent1();    system("pause");}	
	else if(x==2){
	viewstudent2();    system("pause");}
	else if(x==3){
	viewstudent3();    system("pause");}
	else if(x==4){
	viewstudent4();    system("pause");}
	else if(x==5){
	viewstudent5();    system("pause");}
	else if(x==0)
	break;
	else 
	goto start;	
	}
}
void School::show(){
	cout<<endl<<endl;
	cout<<"Name is               : "<<name<<endl;
	cout<<"Roll number is        : "<<rollno<<endl;
	cout<<"Class is              : "<<cl<<endl;
	cout<<"Marks are             : "<<marks<<endl;
	cout<<"Total marks           : "<<total<<endl;
}
void School::searchbyclass(){
	int c,rec=0;
	bool b=false;
	while(c!=0){
	start:	
	heading();
	cout<<"Enter class you want to search (1 to 5), enter 0 to go back : ";
	cin>>c;
	if(c==1){
	ifstream fin("1-Students.txt");
	while(fin.read((char*)&s,sizeof(s))){
	if(c==s.getclass()){
	if(rec<1)
	s.header();
	s.listview();
	rec++;
	b=true;}}
	if(b==false){
	cout<<"Record not found\n";}
	cout<<endl;
	system("pause");	
	fin.close();
	break;}
	else if(c==2){
	ifstream fin("2-Students.txt");
	while(fin.read((char*)&s,sizeof(s))){
	if(c==s.getclass()){
	if(rec<1)
	s.header();
	s.listview();
	rec++;
	b=true;}}
	if(b==false){
	cout<<"Record not found\n";}
	cout<<endl;
	system("pause");	
	fin.close();
	break;}
	else if(c==3){
	ifstream fin("3-Students.txt");
	while(fin.read((char*)&s,sizeof(s))){
	if(c==s.getclass()){
	if(rec<1)
	s.header();
	s.listview();
	rec++;
	b=true;}}
	if(b==false){
	cout<<"Record not found\n";}
	cout<<endl;
	system("pause");	
	fin.close();
	break;}
	else if(c==4){
	ifstream fin("4-Students.txt");
	while(fin.read((char*)&s,sizeof(s))){
	if(c==s.getclass()){
	if(rec<1)
	s.header();
	s.listview();
	rec++;
	b=true;}}
	if(b==false){
	cout<<"Record not found\n";}
	cout<<endl;
	system("pause");	
	fin.close();
	break;}
	else if(c==5){
	ifstream fin("5-Students.txt");
	while(fin.read((char*)&s,sizeof(s))){
	if(c==s.getclass()){
	if(rec<1)
	s.header();
	s.listview();
	rec++;
	b=true;}}
	if(b==false){
	cout<<"Record not found\n";}
	cout<<endl;
	system("pause");	
	fin.close();
	break;}
	else if(c==0)
	break;
	else
	goto start;}
}
void School::searchbyname(){
	int rec=0,x;
	char n[15];
	bool b=false;
	while(x!=0){
	start:
	heading();
	cout<<"Enter your class (1 to 5), enter 0 to go back : ";
	cin>>x;
	if(x==1){
	ifstream fin("1-Students.txt");
	cout<<"Enter name of student you want to search : ";
	cin.ignore();
	cin.getline(n,15);
	while(fin.read((char*)&s,sizeof(s))){
	if(strcmp(n,s.getname())==0){
	if(rec<1)
	s.header();
	s.listview();
	rec++;
	b=true;}}
	if(b==false){
	cout<<"Student not found\n";}
	cout<<endl;
	system("pause");	
	fin.close();}
	else if(x==2){
	ifstream fin("2-Students.txt");
	cout<<"Enter name of student you want to search : ";
	cin.ignore();
	cin.getline(n,15);
	while(fin.read((char*)&s,sizeof(s))){
	if(strcmp(n,s.getname())==0){
	if(rec<1)
	s.header();
	s.listview();
	rec++;
	b=true;}}
	if(b==false){
	cout<<"Student not found\n";}
	cout<<endl;
	system("pause");
	fin.close();}
	else if(x==3){
	ifstream fin("3-Students.txt");
	cout<<"Enter name of student you want to search : ";
	cin.ignore();
	cin.getline(n,15);
	while(fin.read((char*)&s,sizeof(s))){
	if(strcmp(n,s.getname())==0){
	if(rec<1)
	s.header();
	s.listview();
	rec++;
	b=true;}}
	if(b==false){
	cout<<"Student not found\n";}
	fin.close();}
	else if(x==4){
	ifstream fin("4-Students.txt");
	cout<<"Enter name of student you want to search : ";
	cin.ignore();
	cin.getline(n,15);
	while(fin.read((char*)&s,sizeof(s))){
	if(strcmp(n,s.getname())==0){
	if(rec<1)
	s.header();
	s.listview();
	rec++;
	b=true;}}
	if(b==false){
	cout<<"Student not found\n";}
	cout<<endl;
	system("pause");	
	fin.close();}
	else if(x==5){
	ifstream fin("5-Students.txt");
	cout<<"Enter name of student you want to search : ";
	cin.ignore();
	cin.getline(n,15);
	while(fin.read((char*)&s,sizeof(s))){
	if(strcmp(n,s.getname())==0){
	if(rec<1)
	s.header();
	s.listview();
	rec++;
	b=true;}}
	if(b==false){
	cout<<"Student not found\n";}
	cout<<endl;
	system("pause");	
	fin.close();}	
	else if(x==0)
	break;
	else
	goto start;			
}
}
void School::searchbyrollno(){
	bool b=false;
	int r,x;
	while(x!=0){
	start:
	heading();
	cout<<"Enter class (1 to 5), Enter 0 to go back : ";
	cin>>x;
	if(x==1){
	ifstream fin("1-Students.txt");
	cout<<"Enter roll number you want to search : ";
	cin>>r;
	while(fin.read((char*)&s,sizeof(s))){
	if(r==s.getrollno()){
	s.show();
	b=true;}}
	if(b==false){
	cout<<"Student not found\n";}
	cout<<endl;
	system("pause");	
	fin.close();}
	else if(x==2){
	ifstream fin("2-Students.txt");
	cout<<"Enter roll number you want to search : ";
	cin>>r;
	while(fin.read((char*)&s,sizeof(s))){
	if(r==s.getrollno()){
	s.show();
	b=true;}}
	if(b==false){
	cout<<"Student not found\n";}
	cout<<endl;
	system("pause");	
	fin.close();}
	else if(x==3){
	ifstream fin("3-Students.txt");
	cout<<"Enter roll number you want to search : ";
	cin>>r;
	while(fin.read((char*)&s,sizeof(s))){
	if(r==s.getrollno()){
	s.show();
	b=true;}}
	if(b==false){
	cout<<"Student not found\n";}
	fin.close();}
	else if(x==4){
	ifstream fin("4-Students.txt");
	cout<<"Enter roll number you want to search : ";
	cin>>r;
	while(fin.read((char*)&s,sizeof(s))){
	if(r==s.getrollno()){
	s.show();
	b=true;}}
	if(b==false){
	cout<<"Student not found\n";}
	cout<<endl;
	system("pause");	
	fin.close();}
	else if(x==5){
	ifstream fin("5-Students.txt");
	cout<<"Enter roll number you want to search : ";
	cin>>r;
	while(fin.read((char*)&s,sizeof(s))){
	if(r==s.getrollno()){
	s.show();
	b=true;}}
	if(b==false){
	cout<<"Student not found\n";}
	cout<<endl;
	system("pause");	
	fin.close();}	
	else if(x==0)
	break;
	else
	goto start;			
	}
}
void search(){
	int opt;
	while(opt!=4){
	start:
	heading();
	cout<<"\n  1-> By name\n\n"<<"  2-> By class\n\n"<<"  3-> By roll number\n\n"<<"  4-> Back\n\n";
	cout<<"  Enter search method : ";
	cin>>opt;
	switch(opt){
	case 1:
	s.searchbyname();	
	system("pause");
	break;
	case 2:
	s.searchbyclass();
	system("pause");
	break;
	case 3:
	s.searchbyrollno();
	system("pause");
	break;
	case 4:
	break;
	default:
	goto start;	
	}}
}
void School::deletestudent(){
	char op;
	int id,x;
	while(x!=0){
	start:	
	heading();
	cout<<"Enter class (1 to 5), Press 0 to go back : ";
	cin>>x;
	if(x==1){
	ifstream fin("1-Students.txt");
	ofstream fout("temp.txt");
	cout<<"Enter roll number of student you want to delete : ";
	cin>>id;
	while(fin.read((char*)&s,sizeof(s))){
	if(id==s.getrollno()){
	s.show();	
	cout<<"\nStudent found, do you want to delete this record (y/n) ???\n";
	cin>>op;
	if(op=='y' or op=='Y'){
	cout<<"Student deleted\n";}
	else{
	cout<<"Student is not deleted\n";
	fout.write((char*)&s,sizeof(s));}}
	else{
	fout.write((char*)&s,sizeof(s));}}
	system("pause");
	fout.close();
	fin.close();
	remove("1-Students.txt");
	rename("temp.txt","1-Students.txt");}
	else if(x==2){
	ifstream fin("2-Students.txt");
	ofstream fout("temp.txt");
	cout<<"Enter roll number of student you want to delete : ";
	cin>>id;
	while(fin.read((char*)&s,sizeof(s))){
	if(id==s.getrollno()){
	s.show();	
	cout<<"\nStudent found, do you want to delete this record (y/n) ???\n";
	cin>>op;
	if(op=='y' or op=='Y'){
	cout<<"Student deleted\n";}
	else{
	cout<<"Student is not deleted\n";
	fout.write((char*)&s,sizeof(s));}}
	else{
	fout.write((char*)&s,sizeof(s));}}
	system("pause");	
	fout.close();
	fin.close();
	remove("2-Students.txt");
	rename("temp.txt","2-Students.txt");}
	else if(x==3){
	ifstream fin("3-Students.txt");
	ofstream fout("temp.txt");
	cout<<"Enter roll number of student you want to delete : ";
	cin>>id;
	while(fin.read((char*)&s,sizeof(s))){
	if(id==s.getrollno()){
	s.show();	
	cout<<"\nStudent found, do you want to delete this record (y/n) ???\n";
	cin>>op;
	if(op=='y' or op=='Y'){
	cout<<"Student deleted\n";}
	else{
	cout<<"Student is not deleted\n";
	fout.write((char*)&s,sizeof(s));}}
	else{
	fout.write((char*)&s,sizeof(s));}}
	system("pause");	
	fout.close();
	fin.close();
	remove("3-Students.txt");
	rename("temp.txt","3-Students.txt");}	
	else if(x==4){
	ifstream fin("4-Students.txt");
	ofstream fout("temp.txt");
	cout<<"Enter roll number of student you want to delete : ";
	cin>>id;
	while(fin.read((char*)&s,sizeof(s))){
	if(id==s.getrollno()){
	s.show();	
	cout<<"\nStudent found, do you want to delete this record (y/n) ???\n";
	cin>>op;
	if(op=='y' or op=='Y'){
	cout<<"Student deleted\n";}
	else{
	cout<<"Student is not deleted\n";
	fout.write((char*)&s,sizeof(s));}}
	else{
	fout.write((char*)&s,sizeof(s));}}
	system("pause");	
	fout.close();
	fin.close();
	remove("4-Students.txt");
	rename("temp.txt","4-Students.txt");}	
	else if(x==5){
	ifstream fin("5-Students.txt");
	ofstream fout("temp.txt");
	cout<<"Enter roll number of student you want to delete : ";
	cin>>id;
	while(fin.read((char*)&s,sizeof(s))){
	if(id==s.getrollno()){
	s.show();	
	cout<<"\nStudent found, do you want to delete this record (y/n) ???\n";
	cin>>op;
	if(op=='y' or op=='Y'){
	cout<<"Student deleted\n";}
	else{
	cout<<"Student is not deleted\n";
	fout.write((char*)&s,sizeof(s));}}
	else{
	fout.write((char*)&s,sizeof(s));}}
	system("pause");	
	fout.close();
	fin.close();
	remove("5-Students.txt");
	rename("temp.txt","5-Students.txt");}	
	else if(x==0)
	break;
	else
	goto start;}
	s.countstudents();
}
void School::addstudent(){
	int rollnum,x;
	bool b=false;
	while(x!=0){
	start:	
	heading();	
	cout<<"Enter your class (1 to 5), Press 0 to go back : ";
	cin>>x;
	if(x==1){
	fstream f("1-Students.txt", ios::in);
	fstream f1("1-Students.txt", ios::app);
	cout<<"Enter roll number you want to add : ";
	cin>>rollnum;
	while(f.read((char*)&s,sizeof(s))){
	if(rollnum==s.getrollno()){
	b=true;
	cout<<"Student already exists\n";
	return;}}
	if(b==false){
	cout<<"Enter name : ";
	cin.ignore();
	cin.getline(name,20);
	cl=1;
	cout<<"Enter marks : ";
	cin>>marks;
	cout<<"Enter total marks : ";
	cin>>total;
	rollno=rollnum;	
	f1.write((char*)&s,sizeof(s));}
	f1.close();
	f.close();
	break;}
	else if(x==2){
	fstream f("2-Students.txt", ios::in);
	fstream f1("2-Students.txt", ios::app);
	cout<<"Enter roll number you want to add : ";
	cin>>rollnum;
	while(f.read((char*)&s,sizeof(s))){
	if(rollnum==s.getrollno()){
	b=true;
	cout<<"Student already exists\n";
	return;}}
	if(b==false){
	cout<<"Enter name : ";
	cin.ignore();
	cin.getline(name,20);
	cl=1;
	cout<<"Enter marks : ";
	cin>>marks;
	cout<<"Enter total marks : ";
	cin>>total;
	rollno=rollnum;	
	f1.write((char*)&s,sizeof(s));}
	f1.close();
	f.close();
	break;}
	else if(x==3){
	fstream f("3-Students.txt", ios::in);
	fstream f1("3-Students.txt", ios::app);
	cout<<"Enter roll number you want to add : ";
	cin>>rollnum;
	while(f.read((char*)&s,sizeof(s))){
	if(rollnum==s.getrollno()){
	b=true;
	cout<<"Student already exists\n";
	return;}}
	if(b==false){
	cout<<"Enter name : ";
	cin.ignore();
	cin.getline(name,20);
	cl=1;
	cout<<"Enter marks : ";
	cin>>marks;
	cout<<"Enter total marks : ";
	cin>>total;
	rollno=rollnum;	
	f1.write((char*)&s,sizeof(s));}
	f1.close();
	f.close();
	break;}
	else if(x==4){
	fstream f("4-Students.txt", ios::in);
	fstream f1("4-Students.txt", ios::app);
	cout<<"Enter roll number you want to add : ";
	cin>>rollnum;
	while(f.read((char*)&s,sizeof(s))){
	if(rollnum==s.getrollno()){
	b=true;
	cout<<"Student already exists\n";
	return;}}
	if(b==false){
	cout<<"Enter name : ";
	cin.ignore();
	cin.getline(name,20);
	cl=1;
	cout<<"Enter marks : ";
	cin>>marks;
	cout<<"Enter total marks : ";
	cin>>total;
	rollno=rollnum;	
	f1.write((char*)&s,sizeof(s));}
	f1.close();
	f.close();
	break;}
	else if(x==5){
	fstream f("5-Students.txt", ios::in);
	fstream f1("5-Students.txt", ios::app);
	cout<<"Enter roll number you want to add : ";
	cin>>rollnum;
	while(f.read((char*)&s,sizeof(s))){
	if(rollnum==s.getrollno()){
	b=true;
	cout<<"Student already exists\n";
	return;}}
	if(b==false){
	cout<<"Enter name : ";
	cin.ignore();
	cin.getline(name,20);
	cl=1;
	cout<<"Enter marks : ";
	cin>>marks;
	cout<<"Enter total marks : ";
	cin>>total;
	rollno=rollnum;	
	f1.write((char*)&s,sizeof(s));}
	f1.close();
	f.close();
	break;}
	else if(x==0)
	break;
	else
	goto start;}
	s.countstudents();
}
void School::edit(){
	int x=-1;
	while(x!=0){	
	start:
	heading();
	cout<<"Enter your class (1 to 5), enter 0 to go back : ";
	cin>>x;
	if(x==1){
	fstream f("1-Students.txt", ios::in);
	fstream f1("1-Students.txt", ios::out | ios::in);
	bool b=false;
	int r,r1;
	cout<<"Enter roll number to search : ";
	cin>>r;
	cout<<"Enter roll number you want to add : ";
	cin>>r1;
	while(f.read((char*)&s,sizeof(s))){
	if(r1==s.getrollno()){
	cout<<"Roll number must be unique\n";
	b=true;
	system("pause");
	return;}}
	if(b==false){
	while(f1.read((char*)&s,sizeof(s))){
	if(r==s.getrollno()){
	int pos=f1.tellg();
	f1.seekg(pos-sizeof(s));
	cout<<"This data will be modified : ";
	s.show();
	cout<<"Enter new name : ";
	cin.ignore();
	cin.getline(name,15);
	cout<<"Enter new marks : ";
	cin>>marks;
	cout<<"Enter total marks : ";
	cin>>total;
	cout<<"Enter new class : ";
	cin>>cl;
	rollno=r1;
	f1.write((char*)&s,sizeof(s));
	cout<<"\nEdited successfully\n";
	f.close();
	f1.close();
	break;}}}}
	else if(x==2){
	fstream f("2-Students.txt", ios::in);
	fstream f1("2-Students.txt", ios::out | ios::in);
	bool b=false;
	int r,r1;
	cout<<"Enter roll number to search : ";
	cin>>r;
	cout<<"Enter roll number you want to add : ";
	cin>>r1;
	while(f.read((char*)&s,sizeof(s))){
	if(r1==s.getrollno()){
	cout<<"Roll number must be unique\n";
	b=true;
	system("pause");
	return;}}
	if(b==false){
	while(f1.read((char*)&s,sizeof(s))){
	if(r==s.getrollno()){
	int pos=f1.tellg();
	f1.seekg(pos-sizeof(s));
	cout<<"This data will be modified : ";
	s.show();
	cout<<"Enter new name : ";
	cin.ignore();
	cin.getline(name,15);
	cout<<"Enter new marks : ";
	cin>>marks;
	cout<<"Enter total marks : ";
	cin>>total;
	cout<<"Enter new class : ";
	cin>>cl;
	rollno=r1;
	f1.write((char*)&s,sizeof(s));
	cout<<"\nEdited successfully\n";
	f.close();
	f1.close();
	break;}}}}
	else if(x==3){
	fstream f("3-Students.txt", ios::in);
	fstream f1("3-Students.txt", ios::out | ios::in);
	bool b=false;
	int r,r1;
	cout<<"Enter roll number to search : ";
	cin>>r;
	cout<<"Enter roll number you want to add : ";
	cin>>r1;
	while(f.read((char*)&s,sizeof(s))){
	if(r1==s.getrollno()){
	cout<<"Roll number must be unique\n";
	b=true;
	system("pause");
	return;}}
	if(b==false){
	while(f1.read((char*)&s,sizeof(s))){
	if(r==s.getrollno()){
	int pos=f1.tellg();
	f1.seekg(pos-sizeof(s));
	cout<<"This data will be modified : ";
	s.show();
	cout<<"Enter new name : ";
	cin.ignore();
	cin.getline(name,15);
	cout<<"Enter new marks : ";
	cin>>marks;
	cout<<"Enter total marks : ";
	cin>>total;
	cout<<"Enter new class : ";
	cin>>cl;
	rollno=r1;
	f1.write((char*)&s,sizeof(s));
	cout<<"\nEdited successfully\n";
	f.close();
	f1.close();
	break;}}}}
	else if(x==4){
	fstream f("4-Students.txt", ios::in);
	fstream f1("4-Students.txt", ios::out | ios::in);
	bool b=false;
	int r,r1;
	cout<<"Enter roll number to search : ";
	cin>>r;
	cout<<"Enter roll number you want to add : ";
	cin>>r1;
	while(f.read((char*)&s,sizeof(s))){
	if(r1==s.getrollno()){
	cout<<"Roll number must be unique\n";
	b=true;
	system("pause");
	return;}}
	if(b==false){
	while(f1.read((char*)&s,sizeof(s))){
	if(r==s.getrollno()){
	int pos=f1.tellg();
	f1.seekg(pos-sizeof(s));
	cout<<"This data will be modified : ";
	s.show();
	cout<<"Enter new name : ";
	cin.ignore();
	cin.getline(name,15);
	cout<<"Enter new marks : ";
	cin>>marks;
	cout<<"Enter total marks : ";
	cin>>total;
	cout<<"Enter new class : ";
	cin>>cl;
	rollno=r1;
	f1.write((char*)&s,sizeof(s));
	cout<<"\nEdited successfully\n";
	f.close();
	f1.close();
	break;}}}}
	else if(x==5){
	fstream f("5-Students.txt", ios::in);
	fstream f1("5-Students.txt", ios::out | ios::in);
	bool b=false;
	int r,r1;
	cout<<"Enter roll number to search : ";
	cin>>r;
	cout<<"Enter roll number you want to add : ";
	cin>>r1;
	while(f.read((char*)&s,sizeof(s))){
	if(r1==s.getrollno()){
	cout<<"Roll number must be unique\n";
	b=true;
	system("pause");
	return;}}
	if(b==false){
	while(f1.read((char*)&s,sizeof(s))){
	if(r==s.getrollno()){
	int pos=f1.tellg();
	f1.seekg(pos-sizeof(s));
	cout<<"This data will be modified : ";
	s.show();
	cout<<"Enter new name : ";
	cin.ignore();
	cin.getline(name,15);
	cout<<"Enter new marks : ";
	cin>>marks;
	cout<<"Enter total marks : ";
	cin>>total;
	cout<<"Enter new class : ";
	cin>>cl;
	rollno=r1;
	f1.write((char*)&s,sizeof(s));
	cout<<"\nEdited successfully\n";
	f.close();
	f1.close();
	break;}}}}
	else if(x==0)
	break;
	else
	goto start;
}}
void manage(){
	int x;
	while(x!=3){
	start:
	heading();
	cout<<"\n  1-> Add student (Total students "<<count<<")\n\n";
	cout<<"  2-> Delete student\n\n"<<"  3-> Back\n\n  ";
	cin>>x;
	switch(x){
	case 1:
	s.addstudent();	
	system("pause");
	break;
	case 2:
	s.deletestudent();
	break;
	case 3:
	break;
	default:
	goto start;	}}
}
void School::highachievers(){
	int rec,x=1;
	float p;
	while(x!=0){
	start:	
	heading();
	cout<<"Enter class (1 to 5), Press 0 to go back : ";
	cin>>x;
	cout<<endl;
	if(x==1){
	rec=0;	
	ifstream fin("1-Students.txt");
	while(fin.read((char*)&s,sizeof(s))){
	p=(marks/total)*100;
	if(p>=95){
	if(rec<1)
	s.header();
	s.listview();
	rec++;
	}}
	if(rec==0){
	cout<<"No high-achievers\n";	
	}
	cout<<endl;
	system("pause");
	fin.close();}
	else if(x==2){
	rec=0;	
	ifstream fin("2-Students.txt");
	while(fin.read((char*)&s,sizeof(s))){
	p=(marks/total)*100;
	if(p>=95){
	if(rec<1)
	s.header();
	s.listview();
	rec++;	
	}}
	if(rec==0){
	cout<<"No high-achievers\n";	
	}
	cout<<endl;
	system("pause");
	fin.close();}
	else if(x==3){
	rec=0;	
	ifstream fin("3-Students.txt");
	while(fin.read((char*)&s,sizeof(s))){
	p=(marks/total)*100;
	if(p>=95){
	if(rec<1)
	s.header();
	s.listview();
	rec++;	
	}}
	if(rec==0){
	cout<<"No high-achievers\n";	
	}
	cout<<endl;
	system("pause");
	fin.close();}
	else if(x==4){
	rec=0;	
	ifstream fin("4-Students.txt");
	while(fin.read((char*)&s,sizeof(s))){
	p=(marks/total)*100;
	if(p>=95){
	if(rec<1)
	s.header();
	s.listview();
	rec++;	
	}}
	if(rec==0){
	cout<<"No high-achievers\n";	
	}
	cout<<endl;
	system("pause");	
	fin.close();}
	else if(x==5){
	rec=0;	
	ifstream fin("5-Students.txt");
	while(fin.read((char*)&s,sizeof(s))){
	p=(marks/total)*100;
	if(p>=95){
	if(rec<1)
	s.header();
	s.listview();
	rec++;	
	}}
	if(rec==0){
	cout<<"No high-achievers\n";	
	}
	cout<<endl;
	system("pause");	
	fin.close();}
	else if(x==0)
	break;
	else
	goto start;				
	}
}
void School::failures(){
	int rec,x=1;
	float p;
	while(x!=0){
	start:	
	heading();
	cout<<"Enter class (1 to 5), Press 0 to go back : ";
	cin>>x;
	cout<<endl;
	if(x==1){
	rec=0;	
	ifstream fin("1-Students.txt");
	while(fin.read((char*)&s,sizeof(s))){
	p=(s.getmarks()/s.gettotal()) * 100;
	if(p<50){
	if(rec<1)
	s.header();
	s.listview();
	rec++;}}
	if(rec==0)
	cout<<"No student failed \n";
	cout<<endl;
	system("pause");
	fin.close();}
	else if(x==2){
	rec=0;	
	ifstream fin("2-Students.txt");
	while(fin.read((char*)&s,sizeof(s))){
	p=(s.getmarks()/s.gettotal()) * 100;
	if(p<50){
	if(rec<1)
	s.header();
	s.listview();
	rec++;}}
	if(rec==0)
	cout<<"No student failed \n";
	cout<<endl;
	system("pause");
	fin.close();}
	else if(x==3){
	rec=0;	
	ifstream fin("3-Students.txt");
	while(fin.read((char*)&s,sizeof(s))){
	p=(s.getmarks()/s.gettotal()) * 100;
	if(p<50){
	if(rec<1)
	s.header();
	s.listview();
	rec++;}}
	if(rec==0)
	cout<<"No student failed \n";
	cout<<endl;
	system("pause");
	fin.close();}
	else if(x==4){
	rec=0;	
	ifstream fin("4-Students.txt");
	while(fin.read((char*)&s,sizeof(s))){
	p=(s.getmarks()/s.gettotal()) * 100;
	if(p<50){
	if(rec<1)
	s.header();
	s.listview();
	rec++;}}
	if(rec==0)
	cout<<"No student failed \n";
	cout<<endl;
	system("pause");
	fin.close();}
	else if(x==5){
	rec=0;	
	ifstream fin("5-Students.txt");
	while(fin.read((char*)&s,sizeof(s))){
	p=(s.getmarks()/s.gettotal()) * 100;
	if(p<50){
	if(rec<1)
	s.header();
	s.listview();
	rec++;}}
	if(rec==0)
	cout<<"No student failed \n";
	cout<<endl;
	system("pause");
	fin.close();}
	else if(x==0)
	break;
	else
	goto start;				
	}
}
void help(){
	int x;
	while(x!=7){
	start:	
	heading();
	cout<<"\n  1-> Seek help regarding 'Manage data' function\n\n";
	cout<<"  2-> Seek help regarding 'Search' function\n\n";
	cout<<"  3-> Seek help regarding 'Edit' fnction\n\n";
	cout<<"  4-> Seek help regarding 'Show students' function\n\n";
	cout<<"  5-> Seek help regarding 'High achievers' function\n\n";
	cout<<"  6-> Seek help regarding 'Failures' function\n\n"<<"  7-> Back\n\n  ";
	cin>>x;
	switch(x){
	case 1:
	heading();	
	cout<<"\n This function allows user to enter and delete student's record.\n\n";
	system("pause");
	break;
	case 2:
	heading();	
	cout<<"\n This function allows user to search any student using name,roll number or class.\n\n";
	system("pause");
	break;
	case 3:
	heading();	
	cout<<"\n This function allows user to modify an existing student's record.\n\n";
	system("pause");
	break;
	case 4:
	heading();	
	cout<<"\n This function allows user to display all students.\n\n";
	system("pause");
	break;
	case 5:
	heading();	
	cout<<"\n This function allows user to see those students who scored more than 95% marks.\n\n";
	system("pause");
	break;
	case 6:
	heading();	
	cout<<"\n This function allows user to see those students who scored less than 50% marks.\n\n";
	system("pause");
	break;
	case 7:
	break;
	default:
	goto start;	
	}
}}
void menu(){
	int x;
	while(x!=8){
	start:
	system("cls");
	heading();
	system("color B0");
	cout<<"\n  1-> Manage data\n\n"<<"  2-> Search\n\n"<<"  3-> Edit\n\n"<<"  4-> Show students\n\n";
	cout<<"  5-> High achievers\n\n"<<"  6-> Failures \n\n"<<"  7-> Help\n\n";
	cout<<"  8-> Exit\n\n  ";
	cin>>x;
	switch(x){
	case 1:
	manage();
	break;
	case 2:
	search();
	break;	
	case 3:
	s.edit();
	break;	
	case 4:
	viewstudent();
	break;	
	case 5:
	s.highachievers();
	break;
	case 6:
	s.failures();
	break;
	case 7:
	help();
	break;	
	case 8:
	break;
	default:
	goto start;	
	}}
	system("cls");
}	
int main(){
	s.countstudents();
	menu();	
}