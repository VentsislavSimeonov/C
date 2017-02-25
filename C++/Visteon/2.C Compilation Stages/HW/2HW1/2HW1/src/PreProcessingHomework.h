/*
 * PreProcessingHomework.h
 *
 *  Created on: May 28, 2016
 *      Author: venci
 */

#ifndef PREPROCESSINGHOMEWORK_H_
#define PREPROCESSINGHOMEWORK_H_

#define bigType U16
#define littleType U8
#define Pretype( kind ) kind##Type
#define type( kind ) Pretype( kind )
#define Unsigned16Bits unsigned short U16
#define Unsigned8Bits unsigned char U8
#define CHECK_BIT(value, bit) ( value | ( 1 << (bit-1) ) )
#define DeclareTypeU16 typedef Unsigned16Bits // error DeclareTypeU10 -> to DeclareTypeU16
#define DeclareTypeU8 typedef Unsigned8Bits
#define PreDeclare( type ) Declare##Type##type
#define Declare( type ) PreDeclare( type )
#define doTypdefs() Declare( type(big) );\
                    Declare( type(little) );

#define PRINT_BIT(val) printf(#val " = %d", val)
#define declareCheckBits \
        void checkBits( bigType value, littleType bitNum )\
        {\
            bigType bit = CHECK_BIT( value, bitNum );\
            bit >>= bitNum;\
            PRINT_BIT( bit );\
        }
// error "bit <<= bitNum;\" -> bit >>= bitNum;

#define doCheckBits( value, bit ) checkBits( value, bit )
#define do( num1, num2) \
        doTypdefs();\
        declareCheckBits\
        int main( void )\
        {\
            doCheckBits( num1, num2 );\
            return 0;\
        }

#endif /* PREPROCESSINGHOMEWORK_H_ */
