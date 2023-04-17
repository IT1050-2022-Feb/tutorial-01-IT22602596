//Q1
/*
#include<iostream>

using namespace std;
int searchKey(int arr[],int key);
int findMax(int arr[]);

int main(void)
{
    int i;
    int numbers[10];
    int key,newsearchKey,max;
    cout << "Enter valuse for array"<<endl;
    for(i=0;i<10;i++)
    {
        cin >> numbers[i];

    }
     cout << "Enter the key:";
     cin >> key;

     newsearchKey=searchKey(numbers,key);
    
    if(newsearchKey==-1)
    {
        cout << "Value not found";
    }
    else
    {
        cout << "Value is found and index of the elemnt is " << newsearchKey<<endl;
    }

    max=findMax(numbers);//function calling
    
    cout <<"Max = "<<max<<endl;
    
    return 0;
}

int searchKey (int arr[],int key)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    
}

int findMax(int arr[])

{
    int i,max;
    max=arr[0];
    for(i=0;i<10;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;

}*/

//Q2

#include <iostream>
using namespace std;

//create struct
struct Rectangle {
	float length , width;
};

//function creating

float area (float length, float width);

 int main ( )
 {
 	//declre struct variables
 	struct Rectangle r1; //House
 	struct Rectangle r2; // yard
 	
 	//declaring function variables
 	
 	float yard_area , house_area, lawn_area; 
 	
 	//take user inputs
 	
 	cout << "Enter length for House area:" << endl;
 	cin >> r1.length ;
 	
 	cout << "Enter width for House area" << endl;
 	cin >> r1.width ;
 	
 	cout << "Enter length for Yard" <<  endl;
 	cin >> r2.length ;
 	
 	cout << "Enter width for Yard" << endl;
 	cin >> r2.width ;
 	
 	//function calling
 	
 	house_area = area(r1.length , r1.width);
 	yard_area = area(r2.length , r2.width);
 	
 	lawn_area = yard_area - house_area;
 	
 	
 	//print area
 	cout << "Green area: "<<lawn_area ;
 	
 }

float area (float length, float width)
{
	return length * width;
}
















	
