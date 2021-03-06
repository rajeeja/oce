// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPSelections_AssemblyLink_HeaderFile
#define _STEPSelections_AssemblyLink_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_STEPSelections_AssemblyLink.hxx>

#include <Handle_StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_STEPSelections_AssemblyComponent.hxx>
#include <MMgt_TShared.hxx>
class StepRepr_NextAssemblyUsageOccurrence;
class Standard_Transient;
class STEPSelections_AssemblyComponent;



class STEPSelections_AssemblyLink : public MMgt_TShared
{

public:

  
  Standard_EXPORT STEPSelections_AssemblyLink();
  
  Standard_EXPORT STEPSelections_AssemblyLink(const Handle(StepRepr_NextAssemblyUsageOccurrence)& nauo, const Handle(Standard_Transient)& item, const Handle(STEPSelections_AssemblyComponent)& part);
  
      Handle(StepRepr_NextAssemblyUsageOccurrence) GetNAUO()  const;
  
      Handle(Standard_Transient) GetItem()  const;
  
      Handle(STEPSelections_AssemblyComponent) GetComponent()  const;
  
      void SetNAUO (const Handle(StepRepr_NextAssemblyUsageOccurrence)& nauo) ;
  
      void SetItem (const Handle(Standard_Transient)& item) ;
  
      void SetComponent (const Handle(STEPSelections_AssemblyComponent)& part) ;




  DEFINE_STANDARD_RTTI(STEPSelections_AssemblyLink)

protected:




private: 


  Handle(StepRepr_NextAssemblyUsageOccurrence) myNAUO;
  Handle(Standard_Transient) myItem;
  Handle(STEPSelections_AssemblyComponent) myComponent;


};


#include <STEPSelections_AssemblyLink.lxx>





#endif // _STEPSelections_AssemblyLink_HeaderFile
