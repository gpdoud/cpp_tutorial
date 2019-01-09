class Multiplier {
    int m{ 2 };
public:
    Multiplier(int i);
    int operator()(int i) const;
};