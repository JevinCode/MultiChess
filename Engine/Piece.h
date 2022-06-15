#pragma once
#include "Graphics.h"

class Piece
{
public:
	enum class Team
	{
		WHITE,
		BLACK
	};
	Piece(Team t, const Surface& surf);
	virtual void Draw(Graphics& gfx, const Vei2& loc) const = 0;
	Team GetTeam() const;
private:
	Team team;
protected:
	const Surface& s;
};

class Pawn : public Piece
{
public:
	Pawn(Team t, const Surface& surf);
	void Draw(Graphics& gfx, const Vei2& loc) const override;
};

class Bishop : public Piece
{
public:
	Bishop(Team t, const Surface& surf);
	void Draw(Graphics& gfx, const Vei2& loc) const override;
};

class Knight : public Piece
{
public:
	Knight(Team t, const Surface& surf);
	void Draw(Graphics& gfx, const Vei2& loc) const override;
};

class Rook : public Piece
{
public:
	Rook(Team t, const Surface& surf);
	void Draw(Graphics& gfx, const Vei2& loc) const override;
};

class Queen : public Piece
{
public:
	Queen(Team t, const Surface& surf);
	void Draw(Graphics& gfx, const Vei2& loc) const override;
};

class King : public Piece
{
public:
	King(Team t, const Surface& surf);
	void Draw(Graphics& gfx, const Vei2& loc) const override;
};