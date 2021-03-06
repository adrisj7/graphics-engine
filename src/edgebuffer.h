/** Edge Buffer
 *
 *      Holds a bunch of lines in a matrix with transformations
 *
 */

#ifndef H_EDGEBUFFER
#define H_EDGEBUFFER

#include "matrix.h"
#include "buffer.h"

class EdgeBuffer : public Buffer {
    public:
        EdgeBuffer() : Buffer() {};
        EdgeBuffer(Matrix *m) : Buffer(m) {};
        void addEdge(float x0, float y0, float z0, float x1, float y1, float z1);
        void addEdges(Matrix *m) { Buffer::addPoints(m); }
        void addPointyPoint(float x, float y, float z);
        static Matrix *genBox(float x, float y, float z, float xlength, float ylength, float zlength);
        void addBox(float x, float y, float z, float xlength, float ylength, float zlength);
        static Matrix *genSphere(float x, float y, float z, float r);
        void addSphere(float x, float y, float z, float r);
        static Matrix *genTorus(float x, float y, float z, float rCircle, float rTorus);
        void addTorus(float x, float y, float z, float rCircle, float rTorus);
        void addCircle(float cx, float cy, float cz, float r);
        void addHermite(float x0, float y0, float x1, float y1, float dx0, float dy0, float dx1, float dy1);
        void addBezier(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3);
        //void transformSetIdentity();
        //void translate(float dx, float dy, float dz);
        //void scale(float sx, float sy, float sz);
        //void rotate_x(float theta);
        //void rotate_y(float theta);
        //void rotate_z(float theta);
        //void apply();
        //int getPointCount() {return pointCount;}
        //Matrix *getPoints() {return points;}
};

#endif
