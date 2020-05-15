//https://github.com/MAINAKMONDAL98
#include "Arduino.h"
#include"MSMPLOTTER.h"
void MSMPLOTTER::msmplotter(uint16_t arr[],uint16_t p,String name_of_Graph,String x_axis,String y_axis){
  uint16_t a11= name_of_Graph.length();
  //Serial.println(a11);
  //Serial.println("developed by MAINAKMONDAL98(aka MAIK)");
  Serial.println(" ");
  Serial.println("MSMPLOTTER");
  Serial.print("X-Axis:");
  Serial.println(x_axis);
  Serial.print("Y-Axis:");
  Serial.println(y_axis);
  uint16_t storage=0;
    for(uint16_t a1=0;a1<p-1;a1++){
    if(abs(arr[a1]-arr[a1+1])>1){
      if(arr[a1]>arr[a1+1]){
        storage=storage+(abs(arr[a1]-arr[a1+1]));
      }
      else{
        storage=storage+(abs(arr[a1]-arr[a1+1]));
      }
    }
    else{
        storage=storage+1;
    }
  }
  storage=storage+1;
  uint16_t array_graph[storage];
  uint16_t b=0;
  for(uint16_t a1=0;a1<p-1;a1++){
    if(abs(arr[a1]-arr[a1+1])>1){
      if(arr[a1]>arr[a1+1]){
        for(int8_t b1=0;b1<(abs(arr[a1]-arr[a1+1]));b1++){
          array_graph[b+b1]=arr[a1]-b1;
        }
        b=b+(abs(arr[a1]-arr[a1+1]));
      }
      else{
        for(int16_t b1=0;b1<(abs(arr[a1]-arr[a1+1]));b1++){
          array_graph[b+b1]=arr[a1]+b1;
        }
        b=b+(abs(arr[a1]-arr[a1+1]));
      }
    }
    else{
    array_graph[b]=arr[a1];
    b=b+1;
  }
  }
  array_graph[b]=arr[p-1];
 uint16_t a2=0,a3=1000;
  for(int16_t a1=0;a1<b+1;a1++){
    if(array_graph[a1]<a3){
      a3=array_graph[a1];
    }
    else if(array_graph[a1]>a2){
      
      a2=array_graph[a1];
    }
  }
  uint16_t a6=a2;
  uint16_t a7=0;
  while(a6>0){
    a6=a6/10;
    a7++;
  }
  //Serial.println(a7);
  Serial.print("PAGE USED: ");
  Serial.print(storage);
  Serial.print("*");
  Serial.println(a2-a3+1);
  Serial.print("GRAPH NAME: ");
  Serial.print(name_of_Graph);
  for(uint16_t a5=0;a5<b+1-19-a11;a5++){//172
    Serial.print("-");
  }
  Serial.print("-MSMPLOTTER");
  Serial.println(" ");
  for(int16_t a4=a2;a4>=a3;a4--){
    Serial.print("|");
    uint16_t a8=a4;
    uint8_t a9=0;
    while(a8>0){
      a8=a8/10;
      a9++;
    }
    uint16_t a10=a7-a9;
    while(a10>0){
      Serial.print("0");
      if(a4==0){
        a10=a10-1;
      }
      a10=a10-1;
    }
    Serial.print(a4);
    Serial.print("|");
    for(uint16_t a1=0;a1<b+1;a1++){
      if(a4==array_graph[a1]){
        Serial.print("#");
      }
      else{
        Serial.print("_");
      }
    }
    /*for(uint16_t a5=0;a5<172-b-a7-2;a5++){//172
      Serial.print("_");
    }*/
    Serial.println("|");
  }
  Serial.print("|0+");
  uint16_t a10=a7-1;
  while(a10>0){
    Serial.print("-");
    a10=a10-1;
  }
  uint16_t a12=storage;
  uint8_t a13=0;
  while(a12>0){
    a12=a12/10;
    a13++;
  }
  for(uint16_t a5=0;a5<b-a13;a5++){//172
    if(a5==59){
      Serial.print("60");
    }
    else{
      Serial.print(".");
    }
    }
    Serial.print(b+1);
    Serial.println("|");
  Serial.print(" ");
  for(uint16_t a5=0;a5<b+2+a7;a5++){//172
      Serial.print("-");
    }
    Serial.println(" ");
}
