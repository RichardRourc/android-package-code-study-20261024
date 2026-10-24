// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00166c18; body: [[00166c18, 00166c43]]

/* std::exception::~exception() */

void __thiscall std::exception::~exception(exception *this)

{
  bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
  operator_delete(this);
  return;
}


