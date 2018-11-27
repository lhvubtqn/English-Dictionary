# English-Dictionary
Data Structure - Final Assignment

**Author:** Hoang-Vu Le.

**Using:** CLR - Visual Studio 2017

**Setup file is in Setup folder. Download and try!**

## NOTE

- **Managed Class:** Always using pointer. 

- Convert **System::String** to **std::string**

	> #include <msclr\marshal_cppstd.h>
  
	> System::String test = "abc";
  
	> std::string result = msclr::interop::marshal_as<std::string>(test);
  

- Convert **std::string** to **System::String**

	> std::string test = "abc";
  
	> System::String result = gcnew System::String(test.c_str());

- **[STAThread]** before **main** to open multiple dialog:

	> [STAThread]
  
	> int main(array<String^>^ args){}

	![Application UI](https://raw.githubusercontent.com/lhvubtqn/English-Dictionary/master/UI.jpg)
