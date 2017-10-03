#pragma once

template<typename T>
class sm_ptr
{
private:
	T* m_obj nullptr;
public:
	sm_ptr(T* obj) : m_obj(obj) {}
	~sm_ptr() {
		delete m_obj;
	}

	T* operator ->() { return m_obj; }
	T& operator * () { return *m_obj; }

};
