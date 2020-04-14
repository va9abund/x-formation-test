template <class T>
class Array
{
private:
    T* m_pData;
    unsigned int m_nSize;
public:


    Array(unsigned int const nSize) : m_nSize(nSize)
    {
        if (m_nSize >= 0)
            m_pData = new (std::nothrow) T[m_nSize];
    }
    virtual ~Array()
    {
        //if (m_pData != NULL)
        if (m_pData != nullptr)
            delete[] m_pData;
    }

    //Array& operator=(const Array& nSize) {};

    bool Set(unsigned int nPos, const T& Value)
    {
        if (nPos < m_nSize)
        {
            m_pData[nPos] = Value;
            return true;
        }
        else
            return false;
    }
    T Get(unsigned int nPos)
    {
        if (nPos <= m_nSize)
            return m_pData[nPos];
        else
            //return T();
            return std::cout << "parameter is grater than array size"<<std::endl;
    }
};
