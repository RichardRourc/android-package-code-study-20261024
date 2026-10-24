// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00166c54; body: [[00166c54, 00166c7f]]

/* std::bad_exception::~bad_exception() */

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
  operator_delete(this);
  return;
}


