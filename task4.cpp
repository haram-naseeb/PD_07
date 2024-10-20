#include<iostream>
using namespace std;
void triangles(int triangle);
main()
{
    int triangle;
    cout<<"Enter the number of triangles: ";
    cin>>triangle;
    triangles(triangle);
}

void triangles(int triangle)
{
    int dots=0,i;
    for(i=1;i<=triangle;i++)
    {
        dots=dots+i;
    }
    cout<<"Dots in the triangle: "<<dots;
}