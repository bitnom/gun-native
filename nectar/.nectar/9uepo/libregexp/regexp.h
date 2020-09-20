/*
 * This file is part of NectarJS
 * Copyright (c) 2017 - 2020 Adrien THIERRY
 * http://nectarjs.com - https://seraum.com/
 *
 * sources : https://github.com/nectarjs/nectarjs
 * 
 * NectarJS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * NectarJS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with NectarJS.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
 
#include <regex>

__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___30nzhg = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var _search; if(__NJS_VARARGS.size() > 0) _search = __NJS_VARARGS[0];var  _re; if(__NJS_VARARGS.size() > 1)  _re = __NJS_VARARGS[1];
 	if( std::regex_match ( (string)_search, std::regex((string)_re, std::regex::ECMAScript) ) ) return __NJS_Boolean_TRUE;
	else return __NJS_Boolean_FALSE;
;return __NJS_Create_Undefined();});var __NJS_RegExp_Test=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___30nzhg);

/*
__NJS_DECL_Function<NJS::VAR (var, vector<var>)>* __NJS_FN___iqbcgo = new __NJS_DECL_Function<NJS::VAR (var, vector<var>)>([](var __NJS_THIS, vector<var> __NJS_VARARGS ) -> NJS::VAR{var _search; if(__NJS_VARARGS.size() > 0) _search = __NJS_VARARGS[0];var  _re; if(__NJS_VARARGS.size() > 1)  _re = __NJS_VARARGS[1];
	var _res = __NJS_Create_Array();
	std::string s = (string)_search;
	std::smatch m;
 	while(std::regex_search ( s, m, std::regex((string)_re, std::regex::ECMAScript) ))
	{
		for(auto x:m) ((NJS::Class::Array*)_res._ptr)->value.push_back((string)x);
		s = m.suffix().str();
	}
	return _res;
;return __NJS_Create_Undefined();});var __NJS_RegExp_StringMatch=NJS::VAR(NJS::Enum::Type::Function, __NJS_FN___iqbcgo);
*/