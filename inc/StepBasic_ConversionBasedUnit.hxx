// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ConversionBasedUnit_HeaderFile
#define _StepBasic_ConversionBasedUnit_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_ConversionBasedUnit.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <Handle_StepBasic_DimensionalExponents.hxx>
class TCollection_HAsciiString;
class StepBasic_MeasureWithUnit;
class StepBasic_DimensionalExponents;



class StepBasic_ConversionBasedUnit : public StepBasic_NamedUnit
{

public:

  
  //! Returns a ConversionBasedUnit
  Standard_EXPORT StepBasic_ConversionBasedUnit();
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_DimensionalExponents)& aDimensions) ;
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_DimensionalExponents)& aDimensions, const Handle(TCollection_HAsciiString)& aName, const Handle(StepBasic_MeasureWithUnit)& aConversionFactor) ;
  
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  Standard_EXPORT   void SetConversionFactor (const Handle(StepBasic_MeasureWithUnit)& aConversionFactor) ;
  
  Standard_EXPORT   Handle(StepBasic_MeasureWithUnit) ConversionFactor()  const;




  DEFINE_STANDARD_RTTI(StepBasic_ConversionBasedUnit)

protected:




private: 


  Handle(TCollection_HAsciiString) name;
  Handle(StepBasic_MeasureWithUnit) conversionFactor;


};







#endif // _StepBasic_ConversionBasedUnit_HeaderFile
