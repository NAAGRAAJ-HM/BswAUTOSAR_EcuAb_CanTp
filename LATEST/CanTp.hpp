#pragma once
/******************************************************************************/
/* File   : CanTp.hpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstCanTp.hpp"
#include "CfgCanTp.hpp"
#include "CanTp_core.hpp"
#include "infCanTp_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_CanTp:
      INTERFACES_EXPORTED_CANTP
      public abstract_module
   ,  public class_CanTp_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstCanTp_Type* lptrConst = (ConstCanTp_Type*)NULL_PTR;
      infPduRClient_Lo infPduRClient_CanTp;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, CANTP_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, CANTP_CONST,       CANTP_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   CANTP_CONFIG_DATA, CANTP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, CANTP_CODE) DeInitFunction (void);
      FUNC(void, CANTP_CODE) MainFunction   (void);
      CANTP_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_CanTp, CANTP_VAR) CanTp;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

