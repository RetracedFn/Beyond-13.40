#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VectorVM

#include "Basic.hpp"


namespace SDK
{

// Enum VectorVM.EVectorVMOp
// NumValues: 0x0060
enum class EVectorVMOp : uint8
{
	Done                                     = 0,
	Add                                      = 1,
	Sub                                      = 2,
	Mul                                      = 3,
	Div                                      = 4,
	Mad                                      = 5,
	Lerp                                     = 6,
	Rcp                                      = 7,
	Rsq                                      = 8,
	Sqrt                                     = 9,
	Neg                                      = 10,
	Abs                                      = 11,
	Exp                                      = 12,
	Exp2                                     = 13,
	Log                                      = 14,
	Log2                                     = 15,
	Sin                                      = 16,
	Cos                                      = 17,
	Tan                                      = 18,
	Asin                                     = 19,
	Acos                                     = 20,
	Atan                                     = 21,
	Atan2                                    = 22,
	Ceil                                     = 23,
	Floor                                    = 24,
	Fmod                                     = 25,
	Frac                                     = 26,
	Trunc                                    = 27,
	Clamp                                    = 28,
	Min                                      = 29,
	Max                                      = 30,
	Pow                                      = 31,
	Round                                    = 32,
	Sign                                     = 33,
	Step                                     = 34,
	Random                                   = 35,
	Noise                                    = 36,
	Cmplt                                    = 37,
	Cmple                                    = 38,
	Cmpgt                                    = 39,
	Cmpge                                    = 40,
	Cmpeq                                    = 41,
	Cmpneq                                   = 42,
	Select                                   = 43,
	Addi                                     = 44,
	Subi                                     = 45,
	Muli                                     = 46,
	Divi                                     = 47,
	Clampi                                   = 48,
	Mini                                     = 49,
	Maxi                                     = 50,
	Absi                                     = 51,
	Negi                                     = 52,
	Signi                                    = 53,
	Randomi                                  = 54,
	Cmplti                                   = 55,
	Cmplei                                   = 56,
	Cmpgti                                   = 57,
	Cmpgei                                   = 58,
	Cmpeqi                                   = 59,
	Cmpneqi                                  = 60,
	bit_and                                  = 61,
	bit_or                                   = 62,
	bit_xor                                  = 63,
	bit_not                                  = 64,
	bit_lshift                               = 65,
	bit_rshift                               = 66,
	Logic_and                                = 67,
	Logic_or                                 = 68,
	Logic_xor                                = 69,
	Logic_not                                = 70,
	F2i                                      = 71,
	I2f                                      = 72,
	F2b                                      = 73,
	b2f                                      = 74,
	I2b                                      = 75,
	b2i                                      = 76,
	Inputdata_float                          = 77,
	Inputdata_int32                          = 78,
	Inputdata_half                           = 79,
	Inputdata_noadvance_float                = 80,
	Inputdata_noadvance_int32                = 81,
	Inputdata_noadvance_half                 = 82,
	Outputdata_float                         = 83,
	Outputdata_int32                         = 84,
	Outputdata_half                          = 85,
	Acquireindex                             = 86,
	External_func_call                       = 87,
	Exec_index                               = 88,
	Noise2D                                  = 89,
	Noise3D                                  = 90,
	Enter_stat_scope                         = 91,
	Exit_stat_scope                          = 92,
	Update_id                                = 93,
	Acquire_id                               = 94,
	NumOpcodes                               = 95,
};

// Enum VectorVM.EVectorVMOperandLocation
// NumValues: 0x0004
enum class EVectorVMOperandLocation : uint8
{
	Register                                 = 0,
	Constant                                 = 1,
	Num                                      = 2,
	EVectorVMOperandLocation_MAX             = 3,
};

// Enum VectorVM.EVectorVMBaseTypes
// NumValues: 0x0005
enum class EVectorVMBaseTypes : uint8
{
	Float                                    = 0,
	Int                                      = 1,
	Bool                                     = 2,
	Num                                      = 3,
	EVectorVMBaseTypes_MAX                   = 4,
};

}

