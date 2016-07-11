#ifndef GUARD_quack_h
#define GUARD_quack_h

class IQuackBehavior {
public:
    virtual void quack() = 0;
};

class NormalQuack : public IQuackBehavior {
public:
    virtual void quack();
};

class MuteQuack : public IQuackBehavior {
public:
    virtual void quack();
};

#endif
