# x-formation-test
Here is a list of thing which I'm can't call bugs, but they definitely are design problem:
- Virtual desctructor is needed for inheritance purposes, since Array is a standalone class we don't need virtual destructor.
- Get function always returns 0 when we trying to reach elements with index bigger than array size. Fixed with displaying error.
- If we call destructor manually it will try to execute twice, making m_pData nullptr might help.
- Copying with operator "=" is unsafe, new method is proposed Array& operator=(const Array& nSize) {};, however is commented out in code for testing purposes. 
