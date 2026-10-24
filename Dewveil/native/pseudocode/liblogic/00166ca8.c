// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00166ca8; body: [[00166ca8, 00166cd3]]

/* std::bad_alloc::~bad_alloc() */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
  operator_delete(this);
  return;
}


