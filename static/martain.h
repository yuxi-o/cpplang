#ifndef _MARTAIN_H_
#define _MARTAIN_H_

class Martain{
public:
	Martain(int id);
	~Martain();

	void fight() const;
	void hide() const;
	static int getCount();

private:
	static int  martainCount;
	const int m_id;
};

#endif
