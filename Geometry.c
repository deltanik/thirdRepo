#include <stdio.h>

struct point {
   int x; // για τον άξονα x
   int y; // για τον άξονα y
};

struct circle {
   struct point k; // ως κέντρο κύκλου που στην ουσία είναι ένα σημείο
   float r; // ως ακτίνα κύκλου
};

struct triangle {
	struct point a;
	struct point b;
	struct point c;
};

struct circle2 {
    struct point h;
    struct point t;
    struct point z;
};

struct poly {
    struct point l;
    struct point m;
    struct point n;
    struct point x;
};

struct F {
    struct point i;
    struct point m;
};

void geoShapes(struct point *e, struct circle *c, struct triangle *t, struct circle2 *c2, struct poly *p, struct F *f) {
    
    printf("\n\nΑΠΑΝΤΗΣΗ (B)\n");
    printf("\n\t--------------------------------------------");
    printf("\n\tPoint\'s \'E\' new coordinates: x = %d    y = %d\n", t->b.x - e->x, e->y - (int) c->r + t->a.y);
    printf("\t--------------------------------------------\n");

    printf("\n\t--------------------------------------------------");
    printf("\n\tCircle\'s point \'K\' new coordinates: x = %d    y = %d", c->k.x - t->c.x, c->k.y - (int) c->r);
    printf("\n\n\tCircle radius = %.1f\n", c->r);
    printf("\t--------------------------------------------------");

    printf("\n\n\t--------------------------------------------------------------");
    printf("\n\tTriangle\'s point \'A\' same position coordinates: x = %d   y = %d", t->a.x, t->a.y);
    printf("\n\tTriangle\'s point \'B\' same position coordinates: x =  %d   y = %d", t->b.x, t->b.y);
    printf("\n\tTriangle\'s point \'C\' same position coordinates: x =  %d   y = %d", t->c.x, t->c.y);
    printf("\n\t--------------------------------------------------------------");

    printf("\n\n\t--------------------------------------------------------------");
    printf("\n\tCircle2 point \'H\' same position coordinates: x =  %d    y = %d", c2->h.x, c2->h.y);
    printf("\n\tCircle2 point \'T\' same position coordinates: x =  %d    y = %d", c2->t.x, c2->t.y);
    printf("\n\tCircle2 point \'Z\' same position coordinates: x = %d    y = %d", c2->z.x, c2->z.y);
    printf("\n\t--------------------------------------------------------------");
    
    printf("\n\n\t--------------------------------------------------");
    printf("\n\tPoly\'s point \'L\' new coordinates: x = %d    y = %d", c2->h.x + p->l.x + c2->h.x, (int) c->r + p->l.y);
    printf("\n\tPoly\'s point \'M\' new coordinates: x = %d    y = %d", c2->t.x - p->m.x, p->m.y + (int) c->r);
    printf("\n\tPoly\'s point \'N\' new coordinates: x = %d    y = %d", c2->t.x - p->m.x - c2->t.x, p->n.y + (int) c->r);
    printf("\n\tPoly\'s point \'X\' new coordinates: x = %d    y = %d", c2->t.x + p->m.x + c2->t.x - c2->h.y, p->x.y - c2->h.y);
    printf("\n\t--------------------------------------------------");

    printf("\n\n\t----------------------------------------------------------");
    printf("\n\tStraight line\'s point \'M\' new coordinates: x =  %d  y =  %d", f->m.x, t->a.y % f->m.y);
    printf("\n\tStraight line\'s point \'I\' new coordinates: x = %d  y = %d", f->i.x, c2->z.y - f->i.y + (int) c->r);
    printf("\n\t----------------------------------------------------------");
}

int main( ) {
    struct point e; // Σημείο Ε
    struct circle c; // Κύκλος circle
    struct triangle t;
    struct circle2 c2;
    struct poly p;
    struct F f;

    e.x = 8; //τιμές του σημείου Ε
    e.y = 2;

    c.k.x = 8; //τιμές του κύκλου circle
    c.k.y = 8;
    c.r = 2.0;
    
    //-------------------------------------------------------------------

    //1
    t.a.x = -6;
    t.a.y = 4;
    t.b.x = 2;
    t.b.y = 0;
    t.c.x = 4;
    t.c.y = 6;

    //2
    c2.h.x = -6;
    c2.h.y = -2;
    c2.t.x = -4;
    c2.t.y = -8;
    c2.z.x = -12;
    c2.z.y = -6;

    //3
    p.l.x = 6;
    p.l.y = -4;
    p.m.x = 4;
    p.m.y = -8;
    p.n.x = 8;
    p.n.y = -10;
    p.x.x = 10;
    p.x.y = -6;

    //4
    f.i.x = -12;
    f.i.y = 2;
    f.m.x = -6;
    f.m.y = 8;


        /* εκτύπωση των τιμών των E και circle */
    printf("\n\t---------------------------------------");
    printf( "\n\t\'E\' point is located at x = %d and y = %d \n", e.x, e.y);
    printf("\t---------------------------------------");

    printf("\n\n\t-------------------------------------------------");
    printf( "\n\tCircle's center \'K\' is located at x = %d and y = %d\n\n\tRadius of the circle = %.1f", c.k.x, c.k.y, c.r);
    printf("\n\t-------------------------------------------------");
    
    printf("\n\n\nΑΠΑΝΤΗΣΗ (A)\n");
    
    printf("\n1.");
    printf("\t----------------------------------------------------");
    printf( "\n\tTriangle's \'A\' corner is located at x = %d and y = %d\n", t.a.x, t.a.y);
    printf( "\n\tTriangle's \'B\' corner is located at x =  %d and y = %d\n", t.b.x, t.b.y);
    printf( "\n\tTriangle's \'C\' corner is located at x =  %d and y = %d\n", t.c.x, t.c.y);
    printf("\t----------------------------------------------------");
    
    printf("\n\n2.");
    printf("\t--------------------------------------------------");
    printf( "\n\tCircle2 \'H\' point is located at x =  %d and y = %d\n", c2.h.x, c2.h.y);
    printf( "\n\tCircle2 \'T\' point is located at x =  %d and y = %d\n", c2.t.x, c2.t.y);
    printf( "\n\tCircle2 \'Z\' point is located at x = %d and y = %d\n", c2.z.x, c2.z.y);
    printf("\t--------------------------------------------------");

    printf("\n\n3.");
    printf("\t--------------------------------------------------");
    printf( "\n\tPoly's \'L\' point is located at x =  %d  and y =  %d\n", p.l.x, p.l.y);
    printf( "\n\tPoly's \'M\' point is located at x =  %d  and y =  %d\n", p.m.x, p.m.y);
    printf( "\n\tPoly's \'N\' point is located at x =  %d  and y = %d\n", p.n.x, p.n.y);
    printf( "\n\tPoly's \'X\' point is located at x = %d  and y =  %d\n", p.x.x, p.x.y);
    printf("\t--------------------------------------------------\n");

    printf("\n4.");
    printf("\t---------------------------------------------------------");
    printf( "\n\tStraight line's \'I\' point is located at x = %d and y = %d\n", f.i.x, f.i.y);
    printf( "\n\tStraight line's \'M\' point is located at x =  %d and y = %d\n", f.m.x, f.m.y);
    printf("\t---------------------------------------------------------\n");




    geoShapes(&e, &c, &t, &c2, &p, &f);

    return 0;
}
//auto agreement(1 / 2 before, 1 / 2 end);    Δeltan!K