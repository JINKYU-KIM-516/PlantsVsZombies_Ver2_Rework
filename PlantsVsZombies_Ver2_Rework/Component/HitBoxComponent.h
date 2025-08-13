#pragma once

class HitBox
{
protected:
	int m_left; //���� �� �𼭸� x ��ǥ
	int m_top; //���� �� �𼭸� y ��ǥ
	int m_right; //������ �Ʒ� �𼭸� x ��ǥ
	int m_bottom; //������ �Ʒ� �𼭸� y ��ǥ
public:
	void Init(int p_left, int p_top, int p_right, int p_bottom);
	bool IntersectHitBox(HitBox p_hitbox);

	int GetLeft() const;
	int GetTop() const;
	int GetRight() const;
	int GetBottom() const;
};