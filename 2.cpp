#include <iostream>
using namespace std;
typedef struct  {
	int koefisien, pangkat;
	string x;
}polinom;
polinom p1[5], p2[6], p3[2];
polinom abc[8], kali[5*2], dif[5];
int i = 0, ik = 0, ikur = 0;
void fung_p2(){
	p2[0].koefisien = 3;
	p2[0].x = "x^";
	p2[0].pangkat = 9;
	p2[1].koefisien = 4;
	p2[1].x = "x^";
	p2[1].pangkat = 7;
	p2[2].koefisien = 3;
	p2[2].x = "x^";
	p2[2].pangkat = 4;
	p2[3].koefisien = 2;
	p2[3].x = "x^";
	p2[3].pangkat = 3;
	p2[4].koefisien = 2;
	p2[4].x = "x^";
	p2[4].pangkat = 2;
	p2[5].koefisien = 10;}
void fung_p1(){
	p1[0].koefisien = 6;
	p1[0].x = "x^";
	p1[0].pangkat = 8;
	p1[1].koefisien = 8;
	p1[1].x = "x^";
	p1[1].pangkat = 7;
	p1[2].koefisien = 5;
	p1[2].x = "x^";
	p1[2].pangkat = 5;
	p1[3].koefisien = 1;
	p1[3].x = "x^";
	p1[3].pangkat = 3;
	p1[4].koefisien = 15;}
void fung_p3(){
	p3[0].koefisien = 1;
	p3[0].x = "x^";
	p3[0].pangkat = 2;
	p3[1].koefisien = 5;}
void pengisian_polinom() {
	fung_p1();
	fung_p2();
	fung_p3();}
void substractor() {
	for (int a = 0; a < sizeof(p1) / sizeof(polinom); a++){
		for (int b = 0; b < sizeof(p2) / sizeof(polinom); b++){
			if (p1[a].pangkat == p2[b].pangkat){
				abc[ikur].koefisien = p1[a].koefisien - p2[b].koefisien;
				abc[ikur].x = p1[a].x;
				abc[ikur].pangkat = p1[a].pangkat;
				ikur++;}}}
	for (int a = 0; a < sizeof(p1) / sizeof(polinom); a++){
		if (p1[a].pangkat != abc[0].pangkat){
			if (p1[a].pangkat != abc[1].pangkat){
				if (p1[a].pangkat != abc[2].pangkat){
					abc[ikur].koefisien = p1[a].koefisien;
					abc[ikur].x = p1[a].x;
					abc[ikur].pangkat = p1[a].pangkat;
					ikur++;}}}}
	for (int a = 0; a < sizeof(p2) / sizeof(polinom); a++){
		if (p2[a].pangkat != abc[0].pangkat){
			if (p2[a].pangkat != abc[1].pangkat){
				if (p2[a].pangkat != abc[2].pangkat){
					abc[ikur].koefisien = p2[a].koefisien;
					abc[ikur].x = p2[a].x;
					abc[ikur].pangkat = p2[a].pangkat;
					ikur++;}}}}
	cout << "P1 - P2 = ";
	for (ikur = 0; ikur < sizeof(abc) / sizeof(polinom); ikur++){
		cout << abc[ikur].koefisien << abc[ikur].x << abc[ikur].pangkat << " ";}}
void addition() {
	for (int a = 0; a < sizeof(p1) / sizeof(polinom); a++){
		for (int b = 0; b < sizeof(p2) / sizeof(polinom); b++){
			if (p1[a].pangkat == p2[b].pangkat){
				abc[i].koefisien = p1[a].koefisien + p2[b].koefisien;
				abc[i].x = p1[a].x;
				abc[i].pangkat = p1[a].pangkat;
				i++;}}}
	for (int a = 0; a < sizeof(p1) / sizeof(polinom); a++){
		if (p1[a].pangkat != abc[0].pangkat){
			if (p1[a].pangkat != abc[1].pangkat){
				if (p1[a].pangkat != abc[2].pangkat){
					abc[i].koefisien = p1[a].koefisien;
					abc[i].x = p1[a].x;
					abc[i].pangkat = p1[a].pangkat;
					i++;}}}}
	for (int a = 0; a < sizeof(p2) / sizeof(polinom); a++){
		if (p2[a].pangkat != abc[0].pangkat){
			if (p2[a].pangkat != abc[1].pangkat){
				if (p2[a].pangkat != abc[2].pangkat){
					abc[i].koefisien = p2[a].koefisien;
					abc[i].x = p2[a].x;
					abc[i].pangkat = p2[a].pangkat;
					i++;}}}}
	cout << "P1 + P2 = ";
	for (i = 0; i < sizeof(abc) / sizeof(polinom); i++){
		cout << abc[i].koefisien << abc[i].x << abc[i].pangkat << " ";
		cout<<"+ ";}}
void perkalian(){
	for (int a = 0; a < sizeof(p1) / sizeof(polinom); a++){
		for (int b = 0; b < sizeof(p3) / sizeof(polinom); b++){
			kali[ik].koefisien = p1[a].koefisien * p3[b].koefisien;
			kali[ik].x = p1[a].x;
			kali[ik].pangkat = p1[a].pangkat + p3[b].pangkat;
			ik++;}}
	cout << "P1 * P3 = ";
	for (ik = 0; ik < sizeof(kali) / sizeof(polinom); ik++){
		if (kali[ik].pangkat == 2){
			kali[ik].x = "x^";}
		cout << kali[ik].koefisien << kali[ik].x << kali[ik].pangkat << " ";}}
void turunan(){
	for (int a = 0; a < sizeof(p2)/sizeof(polinom); a++){
		if (p2[a].pangkat == 0){
			break;}else{
			dif[a].koefisien = p2[a].koefisien * p2[a].pangkat;
			dif[a].x = "x^";
			dif[a].pangkat = p2[a].pangkat - 1;}}
	cout << "P2\' = ";
	for (int a = 0; a < sizeof(dif) / sizeof(polinom); a++){
		cout << dif[a].koefisien << dif[a].x << dif[a].pangkat << " ";
		if (a==4)break;
		cout<<"+ ";	}}
int main(){
	pengisian_polinom();
	addition();
	cout << "\n";
	substractor();
	cout << "\n";
	perkalian();
	cout << "\n";
	turunan();
	cout << "\n";
	return 0;}

