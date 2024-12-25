#ifdef MATERIAL_H
#define MATERIAL_H

/* materials have 3 sizes the large, midium and small 
     large boxes : steel 200 kg
     midium boxes : aluminium 150 kg
     small boxes : wood 100 kg
  Connected in a doubly-linked list structure
*/
  
  typedef struct material_type {  // define the type of the boxes
    char name[20]; //
    float weight;
    int quantity;
    int loaded;

  } material_type;
 
    /*
      the methods that i need 
       Load material, starting from first suitable wagon from head of the Train
       

    
    */ 

  
   



#endif 