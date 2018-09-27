// ---------------------------------------------------------------------------------------------------------------------
// https://github.com/eth-p/unraid/tree/master/source/chimera | Copyright (C) 2018 Ethan P. (eth-p)
// Unraid's most powerful hybrid theme manager.
//
// Tool: chimera
// File: src/sassfn/theme_option.cpp
//       Binding and implementation of the `theme-option()` sass function.
// ---------------------------------------------------------------------------------------------------------------------
#pragma once
#include <sass.h>
#include "../Theme.hpp"

namespace sassfn {

	// Signature:
	// theme-option($variable)
	union Sass_Value* call_unraid_version(const union Sass_Value* args, Sass_Function_Entry cb, struct Sass_Compiler* compiler) {
		Sass_Tag type = sass_value_get_tag(args);

		Theme* theme = static_cast<Theme*>(sass_function_get_cookie(cb));
		theme->getApp()->getUnraid()->getVersion();

	}

}
//
//enum Sass_Callee_Type sass_callee_get_type (Sass_Callee_Entry);
//Sass_Env_Frame sass_callee_get_env (Sass_Callee_Entry);
//
//// Getters and Setters for environments (lexical, local and global)
//union Sass_Value* sass_env_get_lexical (Sass_Env_Frame, const char*);
//void sass_env_set_lexical (Sass_Env_Frame, const char*, union Sass_Value*);
//union Sass_Value* sass_env_get_local (Sass_Env_Frame, const char*);
//void sass_env_set_local (Sass_Env_Frame, const char*, union Sass_Value*);
//union Sass_Value* sass_env_get_global (Sass_Env_Frame, const char*);
//void sass_env_set_global (Sass_Env_Frame, const char*, union Sass_Value*);