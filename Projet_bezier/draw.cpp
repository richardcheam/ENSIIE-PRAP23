#include "draw.hpp"

std::vector<std::vector<Bezier> > draw_A() {
    std::vector<std::vector<Bezier> > A(2);
    // Outer outline
    A[0].emplace_back(Point2D(10, 100), Point2D(40, 0));
    A[0].emplace_back(Point2D(40, 0), Point2D(60, 0));
    A[0].emplace_back(Point2D(60, 0), Point2D(90, 100));
    A[0].emplace_back(Point2D(90, 100), Point2D(67, 100));
    A[0].emplace_back(Point2D(67, 100), Point2D(60, 75));
    A[0].emplace_back(Point2D(60, 75), Point2D(40, 75));
    A[0].emplace_back(Point2D(40, 75), Point2D(33, 100));
    A[0].emplace_back(Point2D(33, 100), Point2D(10, 100));
    // Inner triangle
    A[1].emplace_back(Point2D(41, 56), Point2D(50, 32));
    A[1].emplace_back(Point2D(50, 32), Point2D(59, 56));
    A[1].emplace_back(Point2D(59, 56), Point2D(41, 56));
    return A;
}

std::vector<std::vector<Bezier> > draw_B(){
    std::vector<std::vector<Bezier> > B(3);
    // Outer outline
    B[0].emplace_back(Point2D(10, 100), Point2D(10, 0));
    B[0].emplace_back(Point2D(10, 0), Point2D(50, 0));
    B[0].emplace_back(Point2D(50, 0), Point2D(90, 25), Point2D(90, 0));
    B[0].emplace_back(Point2D(90, 25), Point2D(70, 50), Point2D(90, 50));
    B[0].emplace_back(Point2D(70, 50), Point2D(90, 75), Point2D(90, 50));
    B[0].emplace_back(Point2D(90, 75), Point2D(50, 100), Point2D(90, 100));
    B[0].emplace_back(Point2D(50, 100), Point2D(10, 100));
    // Upper inner hole
    B[1].emplace_back(Point2D(30, 40), Point2D(30, 20));
    B[1].emplace_back(Point2D(30, 20), Point2D(50, 20));
    B[1].emplace_back(Point2D(50, 20), Point2D(70, 30), Point2D(70, 20));
    B[1].emplace_back(Point2D(70, 30), Point2D(50, 40), Point2D(70, 40));
    B[1].emplace_back(Point2D(50, 40), Point2D(30, 40));
    // Lower inner hole
    B[2].emplace_back(Point2D(30, 80), Point2D(30, 60));
    B[2].emplace_back(Point2D(30, 60), Point2D(50, 60));
    B[2].emplace_back(Point2D(50, 60), Point2D(70, 70), Point2D(70, 60));
    B[2].emplace_back(Point2D(70, 70), Point2D(50, 80), Point2D(70, 80));
    B[2].emplace_back(Point2D(50, 80), Point2D(30, 80));
    return B;
}

std::vector<std::vector<Bezier> > draw_C(){
    std::vector<std::vector<Bezier> > C(1); // One vector inside the outer vector
    // Outer outline
    C[0].emplace_back(Point2D(90, 0), Point2D(50, 0));
    C[0].emplace_back(Point2D(50, 0), Point2D(10, 50), Point2D(10, 0));
    C[0].emplace_back(Point2D(10, 50), Point2D(50, 100), Point2D(10, 100));
    C[0].emplace_back(Point2D(50, 100), Point2D(90, 100));
    C[0].emplace_back(Point2D(90, 100), Point2D(90, 80));
    C[0].emplace_back(Point2D(90, 80), Point2D(50, 80));
    C[0].emplace_back(Point2D(50, 80), Point2D(30, 50), Point2D(30, 80));
    C[0].emplace_back(Point2D(30, 50), Point2D(50, 20), Point2D(30, 20));
    C[0].emplace_back(Point2D(50, 20), Point2D(90, 20));
    C[0].emplace_back(Point2D(90, 20), Point2D(90, 0));
    return C;
}

std::vector<std::vector<Bezier> > draw_D(){
    std::vector<std::vector<Bezier> > D(2);
    // Outer outline
    D[0].emplace_back(Point2D(10, 0), Point2D(50, 0));
    D[0].emplace_back(Point2D(50, 0), Point2D(90, 50), Point2D(90, 0));
    D[0].emplace_back(Point2D(90, 50), Point2D(50, 100), Point2D(90, 100));
    D[0].emplace_back(Point2D(50, 100), Point2D(10, 100));
    D[0].emplace_back(Point2D(10, 100), Point2D(10, 0));
    // Inner hole
    D[1].emplace_back(Point2D(30, 20), Point2D(50, 20));
    D[1].emplace_back(Point2D(50, 20), Point2D(70, 50), Point2D(70, 20));
    D[1].emplace_back(Point2D(70, 50), Point2D(50, 80), Point2D(70, 80));
    D[1].emplace_back(Point2D(50, 80), Point2D(30, 80));
    D[1].emplace_back(Point2D(30, 80), Point2D(30, 20));
    return D;
}

std::vector<std::vector<Bezier> > draw_E(){
    std::vector<std::vector<Bezier> > E(1);
    // Outer outline
    E[0].emplace_back(Point2D(10, 0), Point2D(10, 100));
    E[0].emplace_back(Point2D(10, 100), Point2D(90, 100));
    E[0].emplace_back(Point2D(90, 100), Point2D(90, 80));
    E[0].emplace_back(Point2D(90, 80), Point2D(30, 80));
    E[0].emplace_back(Point2D(30, 80), Point2D(30, 60));
    E[0].emplace_back(Point2D(30, 60), Point2D(90, 60));
    E[0].emplace_back(Point2D(90, 60), Point2D(90, 40));
    E[0].emplace_back(Point2D(90, 40), Point2D(30, 40));
    E[0].emplace_back(Point2D(30, 40), Point2D(30, 20));
    E[0].emplace_back(Point2D(30, 20), Point2D(90, 20));
    E[0].emplace_back(Point2D(90, 20), Point2D(90, 0));
    E[0].emplace_back(Point2D(90, 0), Point2D(10, 0));
    return E;
}



std::vector<std::vector<Bezier> > draw_F(){
    std::vector<std::vector<Bezier> > F(1);
    // Outer outline
    F[0].emplace_back(Point2D(10, 0), Point2D(10, 100));
    F[0].emplace_back(Point2D(10, 100), Point2D(30, 100));
    F[0].emplace_back(Point2D(30, 100), Point2D(30, 60));
    F[0].emplace_back(Point2D(30, 60), Point2D(90, 60));
    F[0].emplace_back(Point2D(90, 60), Point2D(90, 40));
    F[0].emplace_back(Point2D(90, 40), Point2D(30, 40));
    F[0].emplace_back(Point2D(30, 40), Point2D(30, 20));
    F[0].emplace_back(Point2D(30, 20), Point2D(90, 20));
    F[0].emplace_back(Point2D(90, 20), Point2D(90, 0));
    F[0].emplace_back(Point2D(90, 0), Point2D(10, 0));
    return F;
}

std::vector<std::vector<Bezier> > draw_G(){
    std::vector<std::vector<Bezier> > G(1);
    // Outer outline
    G[0].emplace_back(Point2D(90, 0), Point2D(50, 0));
    G[0].emplace_back(Point2D(50, 0), Point2D(10, 50), Point2D(10, 0));
    G[0].emplace_back(Point2D(10, 50), Point2D(50, 100), Point2D(10, 100));
    G[0].emplace_back(Point2D(50, 100), Point2D(90, 100));
    G[0].emplace_back(Point2D(90, 100), Point2D(90, 40));
    G[0].emplace_back(Point2D(90, 40), Point2D(50, 40));
    G[0].emplace_back(Point2D(50, 40), Point2D(50, 60));
    G[0].emplace_back(Point2D(50, 60), Point2D(70, 60));
    G[0].emplace_back(Point2D(70, 60), Point2D(70, 80));
    G[0].emplace_back(Point2D(70, 80), Point2D(50, 80));
    G[0].emplace_back(Point2D(50, 80), Point2D(30, 50), Point2D(30, 80));
    G[0].emplace_back(Point2D(30, 50), Point2D(50, 20), Point2D(30, 20));
    G[0].emplace_back(Point2D(50, 20), Point2D(90, 20));
    G[0].emplace_back(Point2D(90, 20), Point2D(90, 0));
    return G;
}

std::vector<std::vector<Bezier> > draw_H(){
    std::vector<std::vector<Bezier> > H(1);
    // Outer outline
    H[0].emplace_back(Point2D(10, 0), Point2D(10, 100));
    H[0].emplace_back(Point2D(10, 100), Point2D(30, 100));
    H[0].emplace_back(Point2D(30, 100), Point2D(30, 60));
    H[0].emplace_back(Point2D(30, 60), Point2D(70, 60));
    H[0].emplace_back(Point2D(70, 60), Point2D(70, 100));
    H[0].emplace_back(Point2D(70, 100), Point2D(90, 100));
    H[0].emplace_back(Point2D(90, 100), Point2D(90, 0));
    H[0].emplace_back(Point2D(90, 0), Point2D(70, 0));
    H[0].emplace_back(Point2D(70, 0), Point2D(70, 40));
    H[0].emplace_back(Point2D(70, 40), Point2D(30, 40));
    H[0].emplace_back(Point2D(30, 40), Point2D(30, 0));
    H[0].emplace_back(Point2D(30, 0), Point2D(10, 0));
    return H;
}


std::vector<std::vector<Bezier> > draw_I(){
    std::vector<std::vector<Bezier> > I(1);
    // Outer outline
    I[0].emplace_back(Point2D(10, 0), Point2D(90, 0));
    I[0].emplace_back(Point2D(90, 0), Point2D(90, 20));
    I[0].emplace_back(Point2D(90, 20), Point2D(60, 20));
    I[0].emplace_back(Point2D(60, 20), Point2D(60, 80));
    I[0].emplace_back(Point2D(60, 80), Point2D(90, 80));
    I[0].emplace_back(Point2D(90, 80), Point2D(90, 100));
    I[0].emplace_back(Point2D(90, 100), Point2D(10, 100));
    I[0].emplace_back(Point2D(10, 100), Point2D(10, 80));
    I[0].emplace_back(Point2D(10, 80), Point2D(40, 80));
    I[0].emplace_back(Point2D(40, 80), Point2D(40, 20));
    I[0].emplace_back(Point2D(40, 20), Point2D(10, 20));
    I[0].emplace_back(Point2D(10, 20), Point2D(10, 0));

    return I;
}

std::vector<std::vector<Bezier> > draw_J(){
    std::vector<std::vector<Bezier> > J(1);
    // Outer outline
    J[0].emplace_back(Point2D(20, 0), Point2D(90, 0));
    J[0].emplace_back(Point2D(90, 0), Point2D(90, 70));
    J[0].emplace_back(Point2D(90, 70), Point2D(45, 100), Point2D(90, 100));
    J[0].emplace_back(Point2D(45, 100), Point2D(10, 70), Point2D(10, 100));  
    J[0].emplace_back(Point2D(10, 70), Point2D(30, 70));
    J[0].emplace_back(Point2D(30, 70), Point2D(50, 80), Point2D(30, 80));  
    J[0].emplace_back(Point2D(50, 80), Point2D(70, 70), Point2D(70, 80));  
    J[0].emplace_back(Point2D(70, 70), Point2D(70, 20));    
    J[0].emplace_back(Point2D(70, 20), Point2D(20, 20)); 
    J[0].emplace_back(Point2D(20, 20), Point2D(20, 0));  

    return J;
}

std::vector<std::vector<Bezier> > draw_K(){
    std::vector<std::vector<Bezier> > K(1);
    // Outer outline
    K[0].emplace_back(Point2D(10, 0), Point2D(10, 100));
    K[0].emplace_back(Point2D(10, 100), Point2D(30, 100));
    K[0].emplace_back(Point2D(30, 100), Point2D(30, 60));
    K[0].emplace_back(Point2D(30, 60), Point2D(70, 100));
    K[0].emplace_back(Point2D(70, 100), Point2D(95, 100));
    K[0].emplace_back(Point2D(95, 100), Point2D(45, 50));
    K[0].emplace_back(Point2D(45, 50), Point2D(95, 0));
    K[0].emplace_back(Point2D(95, 0), Point2D(70, 0));
    K[0].emplace_back(Point2D(70, 0), Point2D(30, 40));
    K[0].emplace_back(Point2D(30, 40), Point2D(30, 0));
    K[0].emplace_back(Point2D(30, 0), Point2D(10, 0));
    return K;
}

std::vector<std::vector<Bezier> > draw_L(){
    std::vector<std::vector<Bezier> > L(1);
    // Outer outline
    // Outer outline
    L[0].emplace_back(Point2D(10, 0), Point2D(10, 100));
    L[0].emplace_back(Point2D(10, 100), Point2D(90, 100));
    L[0].emplace_back(Point2D(90, 100), Point2D(90, 80));
    L[0].emplace_back(Point2D(90, 80), Point2D(30, 80));
    L[0].emplace_back(Point2D(30, 80), Point2D(30, 0));
    L[0].emplace_back(Point2D(30, 0), Point2D(10, 0));
    return L;
}

std::vector<std::vector<Bezier> > draw_M(){
    std::vector<std::vector<Bezier> > M(1);
    // Outer outline
    M[0].emplace_back(Point2D(10, 100), Point2D(10, 0));
    M[0].emplace_back(Point2D(10, 0), Point2D(30, 0));
    M[0].emplace_back(Point2D(30, 0), Point2D(50, 40));
    M[0].emplace_back(Point2D(50, 40), Point2D(70, 0));
    M[0].emplace_back(Point2D(70, 0), Point2D(90, 0));
    M[0].emplace_back(Point2D(90, 0), Point2D(90, 100));
    // Inner hole
    M[0].emplace_back(Point2D(90, 100), Point2D(70, 100));
    M[0].emplace_back(Point2D(70, 100), Point2D(70, 40));
    M[0].emplace_back(Point2D(70, 40), Point2D(50, 75));
    M[0].emplace_back(Point2D(50, 75), Point2D(30, 40));
    M[0].emplace_back(Point2D(30, 40), Point2D(30, 100));
    M[0].emplace_back(Point2D(30, 100), Point2D(10, 100));
    return M;
}

std::vector<std::vector<Bezier> > draw_N(){
    std::vector<std::vector<Bezier> > N(1);
    // Outer outline
    N[0].emplace_back(Point2D(10, 100), Point2D(10, 0));
    N[0].emplace_back(Point2D(10, 0), Point2D(30, 0));
    N[0].emplace_back(Point2D(30, 0), Point2D(70, 65));
    N[0].emplace_back(Point2D(70, 65), Point2D(70, 0));
    N[0].emplace_back(Point2D(70, 0), Point2D(90, 0));
    N[0].emplace_back(Point2D(90, 0), Point2D(90, 100));
    // Inner hole
    N[0].emplace_back(Point2D(90, 100), Point2D(70, 100));
    N[0].emplace_back(Point2D(70, 100), Point2D(30, 40));
    N[0].emplace_back(Point2D(30, 40), Point2D(30, 100));
    N[0].emplace_back(Point2D(30, 100), Point2D(10, 100));
    return N;
}

std::vector<std::vector<Bezier> > draw_O(){
    std::vector<std::vector<Bezier> > O(2);
    // Outer outline
    O[0].emplace_back(Point2D(50, 0), Point2D(95, 50), Point2D(95, 0));
    O[0].emplace_back(Point2D(95, 50), Point2D(50, 100), Point2D(95, 100));
    O[0].emplace_back(Point2D(50, 100), Point2D(5, 50), Point2D(5, 100));
    O[0].emplace_back(Point2D(5, 50), Point2D(50, 0), Point2D(5, 0));
    // Inner hole
    O[1].emplace_back(Point2D(50, 20), Point2D(75, 50), Point2D(75, 20));
    O[1].emplace_back(Point2D(75, 50), Point2D(50, 80), Point2D(75, 80));
    O[1].emplace_back(Point2D(50, 80), Point2D(25, 50), Point2D(25, 80));
    O[1].emplace_back(Point2D(25, 50), Point2D(50, 20), Point2D(25, 20));
    return O;
}

std::vector<std::vector<Bezier> > draw_P(){
    std::vector<std::vector<Bezier> > P(2);
    // Outer outline
    P[0].emplace_back(Point2D(10, 100), Point2D(10, 0));
    P[0].emplace_back(Point2D(0, 0), Point2D(60, 0));
    P[0].emplace_back(Point2D(60, 0), Point2D(90, 30), Point2D(90, 0));
    P[0].emplace_back(Point2D(90, 30), Point2D(70, 60), Point2D(90, 60));
    P[0].emplace_back(Point2D(70, 60), Point2D(30, 60));
    P[0].emplace_back(Point2D(30, 60), Point2D(30, 100));
    P[0].emplace_back(Point2D(30, 100), Point2D(10, 100));
    // Inner hole
    P[1].emplace_back(Point2D(30, 20), Point2D(50, 20));
    P[1].emplace_back(Point2D(50, 20), Point2D(70, 30), Point2D(70, 20));
    P[1].emplace_back(Point2D(70, 30), Point2D(60, 40), Point2D(70, 40));
    P[1].emplace_back(Point2D(60, 40), Point2D(30, 40));
    P[1].emplace_back(Point2D(30, 40), Point2D(30, 20));
    return P;
}

std::vector<std::vector<Bezier> > draw_Q(){
    std::vector<std::vector<Bezier> > Q(2);
    // Outer outline
    Q[0].emplace_back(Point2D(50, 0), Point2D(95, 50), Point2D(95, 0));
    Q[0].emplace_back(Point2D(95, 50), Point2D(87, 83), Point2D(95, 75));
    Q[0].emplace_back(Point2D(87, 83), Point2D(100, 100));
    Q[0].emplace_back(Point2D(100, 100), Point2D(80, 100));
    Q[0].emplace_back(Point2D(80, 100), Point2D(75, 93));
    Q[0].emplace_back(Point2D(75, 93), Point2D(50, 100), Point2D(70, 100));
    Q[0].emplace_back(Point2D(50, 100), Point2D(5, 50), Point2D(5, 100));
    Q[0].emplace_back(Point2D(5, 50), Point2D(50, 0), Point2D(5, 0));
    // Inner hole
    Q[1].emplace_back(Point2D(50, 20), Point2D(75, 50), Point2D(75, 20));
    Q[1].emplace_back(Point2D(75, 50), Point2D(50, 80), Point2D(75, 80));
    Q[1].emplace_back(Point2D(50, 80), Point2D(25, 50), Point2D(25, 80));
    Q[1].emplace_back(Point2D(25, 50), Point2D(50, 20), Point2D(25, 20));
    return Q;
}

std::vector<std::vector<Bezier> > draw_R(){
    std::vector<std::vector<Bezier> > R(2);
    // Outer outline
    R[0].emplace_back(Point2D(10, 100), Point2D(10, 0));
    R[0].emplace_back(Point2D(10, 0), Point2D(60, 0));
    R[0].emplace_back(Point2D(60, 0), Point2D(90, 30), Point2D(90, 0));
    R[0].emplace_back(Point2D(90, 30), Point2D(60, 60), Point2D(90, 60));
    R[0].emplace_back(Point2D(60, 60), Point2D(90, 100));
    R[0].emplace_back(Point2D(90, 100), Point2D(70, 100));
    R[0].emplace_back(Point2D(70, 100), Point2D(40, 60));
    R[0].emplace_back(Point2D(40, 60), Point2D(30, 60));
    R[0].emplace_back(Point2D(30, 60), Point2D(30, 100));
    R[0].emplace_back(Point2D(30, 100), Point2D(10, 100));
    // Inner hole
    R[1].emplace_back(Point2D(30, 20), Point2D(60, 20));
    R[1].emplace_back(Point2D(60, 20), Point2D(70, 30), Point2D(70, 20));
    R[1].emplace_back(Point2D(70, 30), Point2D(60, 40), Point2D(70, 40));
    R[1].emplace_back(Point2D(60, 40), Point2D(30, 40));
    R[1].emplace_back(Point2D(30, 40), Point2D(30, 20));
    return R;
}

std::vector<std::vector<Bezier> > draw_S(){
    std::vector<std::vector<Bezier> > S(1);
    // Outer outline
    S[0].emplace_back(Point2D(90, 0), Point2D(40, 0));
    S[0].emplace_back(Point2D(40, 0), Point2D(10, 30), Point2D(10, 0));
    S[0].emplace_back(Point2D(10, 30), Point2D(40, 60), Point2D(10, 60));
    S[0].emplace_back(Point2D(40, 60), Point2D(60, 60));
    S[0].emplace_back(Point2D(60, 60), Point2D(70, 70), Point2D(70, 60));
    S[0].emplace_back(Point2D(70, 70), Point2D(60, 80), Point2D(70, 80));
    S[0].emplace_back(Point2D(70, 80), Point2D(10, 80));
    S[0].emplace_back(Point2D(10, 80), Point2D(10, 100));
    S[0].emplace_back(Point2D(10, 100), Point2D(70, 100));
    
    S[0].emplace_back(Point2D(70, 100), Point2D(90, 70), Point2D(90, 100));
    S[0].emplace_back(Point2D(90, 70), Point2D(70, 40), Point2D(90, 40));
    S[0].emplace_back(Point2D(70, 40), Point2D(40, 40));
    S[0].emplace_back(Point2D(40, 40), Point2D(30, 30), Point2D(30, 40));
    S[0].emplace_back(Point2D(30, 30), Point2D(40, 20), Point2D(30, 20));
    S[0].emplace_back(Point2D(30, 20), Point2D(90, 20));
    S[0].emplace_back(Point2D(90, 20), Point2D(90, 0));
    return S;
}


std::vector<std::vector<Bezier> > draw_T(){
    std::vector<std::vector<Bezier> > T(1);
    // Outer outline
    T[0].emplace_back(Point2D(10, 0), Point2D(90, 0));
    T[0].emplace_back(Point2D(90, 0), Point2D(90, 20));
    T[0].emplace_back(Point2D(90, 20), Point2D(60, 20));
    T[0].emplace_back(Point2D(60, 20), Point2D(60, 100));
    T[0].emplace_back(Point2D(60, 100), Point2D(40, 100));
    T[0].emplace_back(Point2D(40, 100), Point2D(40, 20));
    T[0].emplace_back(Point2D(40, 20), Point2D(10, 20));
    T[0].emplace_back(Point2D(10, 20), Point2D(10, 0));
    return T;
}

std::vector<std::vector<Bezier> > draw_U(){
    std::vector<std::vector<Bezier> > U(1);
    // Outer outline
    U[0].emplace_back(Point2D(10, 0), Point2D(10, 50));
    U[0].emplace_back(Point2D(10, 50), Point2D(50, 100), Point2D(10, 100));
    U[0].emplace_back(Point2D(50, 100), Point2D(90, 50), Point2D(90, 100));
    U[0].emplace_back(Point2D(90, 50), Point2D(90, 0));
    U[0].emplace_back(Point2D(90, 0), Point2D(70, 0));
    U[0].emplace_back(Point2D(70, 0), Point2D(70, 50));
    U[0].emplace_back(Point2D(70, 50), Point2D(50, 80), Point2D(70, 80));
    U[0].emplace_back(Point2D(50, 80), Point2D(30, 50), Point2D(30, 80));
    U[0].emplace_back(Point2D(30, 50), Point2D(30, 0));
    U[0].emplace_back(Point2D(30, 0), Point2D(10, 0));
    return U;
}

std::vector<std::vector<Bezier> > draw_V(){
    std::vector<std::vector<Bezier> > V(1);
    // Outer outline
    V[0].emplace_back(Point2D(10, 0), Point2D(40, 100));
    V[0].emplace_back(Point2D(40, 100), Point2D(60, 100));
    V[0].emplace_back(Point2D(60, 100), Point2D(90, 0));
    V[0].emplace_back(Point2D(90, 0), Point2D(70, 0));
    V[0].emplace_back(Point2D(70, 0), Point2D(50, 78));
    V[0].emplace_back(Point2D(50, 78), Point2D(30, 0));
    V[0].emplace_back(Point2D(30, 0), Point2D(10, 0));
    return V;
}

std::vector<std::vector<Bezier> > draw_W(){
    std::vector<std::vector<Bezier> > W(1);
    // Outer outline
    W[0].emplace_back(Point2D(5, 0), Point2D(25, 100));
    W[0].emplace_back(Point2D(25, 100), Point2D(40, 100));
    W[0].emplace_back(Point2D(40, 100), Point2D(50, 60));
    W[0].emplace_back(Point2D(50, 60), Point2D(60, 100));
    W[0].emplace_back(Point2D(60, 100), Point2D(75, 100));
    W[0].emplace_back(Point2D(75, 100), Point2D(95, 0));
    W[0].emplace_back(Point2D(95, 0), Point2D(75, 0));
    W[0].emplace_back(Point2D(75, 0), Point2D(65, 50));
    W[0].emplace_back(Point2D(65, 50), Point2D(55, 0));
    W[0].emplace_back(Point2D(55, 0), Point2D(45, 0));
    W[0].emplace_back(Point2D(45, 0), Point2D(35, 50));
    W[0].emplace_back(Point2D(35, 50), Point2D(25, 0));
    W[0].emplace_back(Point2D(25, 0), Point2D(5, 0));
    return W;
}

std::vector<std::vector<Bezier> > draw_X(){
    std::vector<std::vector<Bezier> > X(1);
    // Outer outline
    X[0].emplace_back(Point2D(10, 0), Point2D(30, 0));
    X[0].emplace_back(Point2D(30, 0), Point2D(50, 34));
    X[0].emplace_back(Point2D(50, 34), Point2D(70, 0));
    X[0].emplace_back(Point2D(70, 0), Point2D(90, 0));
    X[0].emplace_back(Point2D(90, 0), Point2D(60, 50));
    X[0].emplace_back(Point2D(60, 50), Point2D(90, 100));
    X[0].emplace_back(Point2D(90, 100), Point2D(70, 100));
    X[0].emplace_back(Point2D(70, 100), Point2D(50, 66));
    X[0].emplace_back(Point2D(50, 66), Point2D(30, 100));
    X[0].emplace_back(Point2D(30, 100), Point2D(10, 100));
    X[0].emplace_back(Point2D(10, 100), Point2D(40, 50));
    X[0].emplace_back(Point2D(40, 50), Point2D(10, 0));
    return X;
}

std::vector<std::vector<Bezier> > draw_Y(){
    std::vector<std::vector<Bezier> > Y(1);
    // Outer outline
    Y[0].emplace_back(Point2D(10, 0), Point2D(30, 0));
    Y[0].emplace_back(Point2D(30, 0), Point2D(50, 40));
    Y[0].emplace_back(Point2D(50, 40), Point2D(70, 0));
    Y[0].emplace_back(Point2D(70, 0), Point2D(90, 0));
    Y[0].emplace_back(Point2D(90, 0), Point2D(60, 60));
    Y[0].emplace_back(Point2D(60, 60), Point2D(60, 100));
    Y[0].emplace_back(Point2D(60, 100), Point2D(40, 100));
    Y[0].emplace_back(Point2D(40, 100), Point2D(40, 60));
    Y[0].emplace_back(Point2D(40, 60), Point2D(10, 0));
    return Y;
}

std::vector<std::vector<Bezier> > draw_Z(){
    std::vector<std::vector<Bezier> > Z(1);
    // Outer outline
    Z[0].emplace_back(Point2D(10, 0), Point2D(90, 0));
    Z[0].emplace_back(Point2D(90, 0), Point2D(90, 20));
    Z[0].emplace_back(Point2D(90, 20), Point2D(35, 80));
    Z[0].emplace_back(Point2D(35, 80), Point2D(90, 80));
    Z[0].emplace_back(Point2D(90, 80), Point2D(90, 100));
    Z[0].emplace_back(Point2D(90, 100), Point2D(10, 100));
    Z[0].emplace_back(Point2D(10, 100), Point2D(10, 80));
    Z[0].emplace_back(Point2D(10, 80), Point2D(65, 20));
    Z[0].emplace_back(Point2D(65, 20), Point2D(10, 20));
    Z[0].emplace_back(Point2D(10, 20), Point2D(10, 0));
    return Z;
}
