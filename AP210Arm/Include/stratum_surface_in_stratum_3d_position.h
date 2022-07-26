#ifndef STRATUM_SURFACE_IN_STRATUM_3D_POSITION_H
#define STRATUM_SURFACE_IN_STRATUM_3D_POSITION_H

// Setup for Windows dll
#ifdef AP210ARM_EXPORTS
#define AP210ARM_API __declspec(dllexport)
#else
#define AP210ARM_API __declspec(dllimport)
#endif

// Supertypes
#include <managed_design_object.h>

// Unions
#include <stratum_surface_shape_select.h>

// Enumerations

class AP210ARM_API stratum_surface_in_stratum_3d_position:
public managed_design_object
   {
   protected:
      // provide a typeid for run time type identification
      enum {typeID = baseID + 815};

   private:
      // Required attributes
      class stratum_3d_shape *_stratum_shape;
      class axis_placement_3d *_transformation;
      union stratum_surface_shape_select *_surface_shape;

      // Optional attributes

   protected:
      stratum_surface_in_stratum_3d_position();

   public:
      ~stratum_surface_in_stratum_3d_position();
      // runtime type identification
      virtual int DynamicType(int ID);
      virtual int getTypeID() {return typeID;};
      static int TypeID() {return typeID;};
      static stratum_surface_in_stratum_3d_position *InstanceOf(ARMObject *);
      static stratum_surface_in_stratum_3d_position *KindOf(ARMObject *);

   private:
      void initialize();

   public:

   // static functions
      // construction factory
      static stratum_surface_in_stratum_3d_position *Construct();


   // member functions
      // check for required attributes
      bool hasRequiredAttributes();
   };
#endif
