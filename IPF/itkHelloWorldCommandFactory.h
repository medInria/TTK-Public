/*=========================================================================

  Program:   ITK Program Factory
  Module:    $RCSfile: $
  Language:  C++
  Date:      $Date: $
  Version:   $Revision: $

  Copyright (c) INRIA Saclay Île-de-France, Parietal Research Team. All rights reserved.
  See CodeCopyright.txt for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#ifndef _itk_HelloWorldCommandFactory_h_
#define _itk_HelloWorldCommandFactory_h_

#include "itkObjectFactoryBase.h"

namespace itk
{

	class HelloWorldCommandFactory : public ObjectFactoryBase
	{
	
	public:
		using Self         = HelloWorldCommandFactory;
		using Superclass   = ObjectFactoryBase;
		using Pointer      = SmartPointer<Self>;
		using ConstPointer = SmartPointer<const Self>;

		/** Class methods used to interface with the registered factories. */
		const char* GetITKSourceVersion() const override;
		const char* GetDescription() const override;
		
		/** Method for class instantiation. */
		itkFactorylessNewMacro(Self);
		static HelloWorldCommandFactory* FactoryNew() { return new HelloWorldCommandFactory;}
		
		/** Run-time type information (and related methods). */
		itkTypeMacro(HelloWorldCommandFactory, ObjectFactoryBase);
		
		/** Register one factory of this type  */
		static void RegisterOneFactory()
		{
			HelloWorldCommandFactory::Pointer HWFactory = HelloWorldCommandFactory::New();
			ObjectFactoryBase::RegisterFactory( HWFactory );
		}
		
		
	protected:
		HelloWorldCommandFactory();
		~HelloWorldCommandFactory() override;
		
	private:
		HelloWorldCommandFactory(const Self&);
		void operator=(const Self&);
		
	};
	
}

#endif
