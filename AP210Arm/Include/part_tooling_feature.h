#ifndef PART_TOOLING_FEATURE_H
#define PART_TOOLING_FEATURE_H

// Setup for Windows dll
#ifdef AP210ARM_EXPORTS
#define AP210ARM_API __declspec(dllexport)
#else
#define AP210ARM_API __declspec(dllimport)
#endif

// Supertypes
#include <part_feature.h>

// Unions

// Enumerations

class AP210ARM_API part_tooling_feature:
public part_feature
   {
   protected:
      // provide a typeid for run time type identification
      enum {typeID = baseID + 550};

   private:
      // Required attributes

      // Optional attributes

   protected:
      part_tooling_feature();

   public:
      ~part_tooling_feature();
      // runtime type identification
      virtual int DynamicType(int ID);
      virtual int getTypeID() {return typeID;};
      static int TypeID() {return typeID;};
      static part_tooling_feature *InstanceOf(ARMObject *);
      static part_tooling_feature *KindOf(ARMObject *);

   private:
      void initialize();

   public:

   // static functions
      // construction factory
      static part_tooling_feature *Construct();


   // member functions
      // check for required attributes
      bool hasRequiredAttributes();
   };
#endif
