
#include <../Sequnces/seq_Part_0_Row_1.inc>  
#include <../Sequnces/seq_Part_0_Row_3.inc>  
#include <../Sequnces/seq_Part_0_Row_2.inc> 

#include <../Sequnces/seq_Part_1_Row_1.inc> 
#include <../Sequnces/seq_Part_1_Row_2.inc>  
#include <../Sequnces/seq_Part_1_Row_3.inc> 

#include <../Sequnces/seq_Part_2_Row_1.inc> 
#include <../Sequnces/seq_Part_2_Row_2.inc> 
#include <../Sequnces/seq_Part_2_Row_3.inc> 

#include <../Sequnces/seq_Part_3_Row_1.inc> 
#include <../Sequnces/seq_Part_3_Row_2.inc> 
#include <../Sequnces/seq_Part_3_Row_3.inc> 

#include <../Sequnces/seq_Part_4_Row_1.inc> 
#include <../Sequnces/seq_Part_4_Row_2.inc>
#include <../Sequnces/seq_Part_4_Row_3.inc>

const char* getRowOne(unsigned int index) {
    if (index>99999) {
        index = index%99991;
    }

    if(index<20000){
        return rowPos_row1_Part_0[index];
    } else if(index>19999 &&  index<40000)  {
        return rowPos_row1_Part_1[index-20000];
    } else if(index>39999 &&  index<60000)  {
        return rowPos_row1_Part_2[index-40000];
    } else if(index>59999 &&  index<80000)  {
        return rowPos_row1_Part_3[index-60000];
    } else if(index>79999 &&  index<100000)  {
        return rowPos_row1_Part_4[index-80000];
    } 
}

const char* getRowTwo(unsigned int index) {
    if (index>99999) {
        index = index%99991;
    }

    if(index<20000){
        return rowPos_row2_Part_0[index];
    } else if(index>19999 &&  index<40000)  {
        return rowPos_row2_Part_1[index-20000];
    } else if(index>39999 &&  index<60000)  {
        return rowPos_row2_Part_2[index-40000];
    } else if(index>59999 &&  index<80000)  {
        return rowPos_row2_Part_3[index-60000];
    } else if(index>79999 &&  index<100000)  {
        return rowPos_row2_Part_4[index-80000];
    } 
}

char* getRowThree(unsigned int index) {
    if (index>99999) {
        index = index%99991;
    }
    
    if(index<20000){
        return rowPos_row3_Part_0[index];
    } else if(index>19999 &&  index<40000)  {
        return rowPos_row3_Part_1[index-20000];
    } else if(index>39999 &&  index<60000)  {
        return rowPos_row3_Part_2[index-40000];
    } else if(index>59999 &&  index<80000)  {
        return rowPos_row3_Part_3[index-60000];
    } else if(index>79999 &&  index<100000)  {
        return rowPos_row3_Part_4[index-80000];
    } 
}
