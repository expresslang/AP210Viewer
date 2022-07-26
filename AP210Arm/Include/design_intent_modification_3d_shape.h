#ifndef DESIGN_INTENT_MODIFICATION_3D_SHAPE_H
#define DESIGN_INTENT_MODIFICATION_3D_SHAPE_H

// Setup for Windows dll
#ifdef AP210ARM_EXPORTS
#define AP210ARM_API __declspec(dllexport)
#else
#define AP210ARM_API __declspec(dllimport)
#endif

// Supertypes
#include <managed_design_object.h>

// Unions

// Enumerations

class AP210ARM_API design_intent_modification_3d_shape:
public managed_design_object
   {
   protected:
      // provide a typeid for run time type identification
      enum {typeID = baseID + 458};

   private:
      // Required attributes
      class design_intent_modification *_represented_design_intent_modification;
      class bound_volume_shape *_shape_representation;

      // Optional attributes

   protected:
      design_intent_modification_3d_shape();

   public:
      ~design_intent_modification_3d_shape();
      // runtime type identification
      virtual int DynamicType(int ID);
      virtual int getTypeID() {return typeID;};
      static int TypeID() {return typeID;};
      static design_intent_modification_3d_shape *InstanceOf(ARMObject *);
      static design_intent_modification_3d_shape *KindOf(ARMObject *);

   private:
      void initialize();

   public:

   // static functions
      // construction factory
      static design_intent_modification_3d_shape *Construct();


   // member functions
      // check for required attributes
      bool hasRequiredAttributes();
   };
#endif
