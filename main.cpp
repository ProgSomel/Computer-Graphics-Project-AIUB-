
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include<math.h>
#define PI  3.14159265358979323846


void Circle(GLfloat x, GLfloat y,GLfloat radius,int c1, int c2, int c3)
{
    int i;

    int triangleAmount = 100;

    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(c1,c2,c3);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++){
        glVertex2f(
                   x+(radius * cos(i * twicePi / triangleAmount)),
                   y+(radius * sin(i * twicePi / triangleAmount))
                   );
    }
    glEnd();
}

void policeCar(){
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.3434181713891, -0.9332891767494);//C
    glVertex2f(-0.3210780402756, -0.9347785188236);//D
    glVertex2f(-0.3210780402756, -0.9491754922079);//E
    glVertex2f(0.1202636610569, -0.9491754922079);//F
    glVertex2f(0.1197672136988, -0.9347785188236);//G
    glVertex2f(0.1445895816028, -0.9352749661817);//H
    glVertex2f(0.1391286606639, -0.9094597035616);//I
    glVertex2f(0.1103347138953, -0.9094597035616);//J
    glVertex2f(0.108348924463, -0.8935733881031);//K
    glVertex2f(0.1351570817993, -0.893076940745);//L
    glVertex2f(0.1301926082185, -0.874211941138);//M
    glVertex2f(0.0601935307293, -0.8732190464218);//N
    glVertex2f(0.0289173471703, -0.8220849685396);//O
    glVertex2f(-0.1493072543801, -0.8215885211816);//P
    glVertex2f(-0.2302281737471, -0.8722261517057);//Q
    glVertex2f(-0.3185958034852, -0.887119572448);//R
    glEnd();

    //Front Red Light
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-0.3201314701232, -0.8934694399697);//C
    glVertex2f(-0.3007521952951, -0.8929157464031);//D
    glVertex2f(-0.2996448081621, -0.9084191662656);//E
    glVertex2f(-0.3300979543205, -0.9084191662656);//F
    glEnd();

    //Middle Blue Line
    glBegin(GL_POLYGON);
    glColor3ub(0,0,255);
    glVertex2f(-0.2789012936316, -0.890523260507);//C
    glVertex2f(0.0786287887837, -0.890523260507);//D
    glVertex2f(0.0790323216081, -0.9050504421853);//E
    glVertex2f(-0.279304826456, -0.9054539750097);//F
    glEnd();

    //Back Red Light
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(0.1097008162622, -0.8933479902778);//C
    glVertex2f(0.1351233841992, -0.8933479902778);//D
    glVertex2f(0.1395622452675, -0.9094893032537);//E
    glVertex2f(0.1097008162622, -0.9090857704293);//F
    glEnd();

    //Upper First Red Light
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-0.1290151572795, -0.8126778836034);//C
    glVertex2f(-0.1097161230061, -0.8123451416332);//D
    glVertex2f(-0.1097161230061, -0.8213291748294);//E
    glVertex2f(-0.1290151572795, -0.8213291748294);//F
    glEnd();

    //Upper Middle Blue Light
    glBegin(GL_POLYGON);
    glColor3ub(0,0,255);
    glVertex2f(-0.1097161230061, -0.8126778836034);//C
    glVertex2f(-0.0904170887328, -0.8126778836034);//D
    glVertex2f(-0.0904170887328, -0.820663690889);//E
    glVertex2f(-0.1093833810359, -0.8213291748294);//F
    glEnd();

    //upper Third Red Light
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-0.090481827402, -0.8128083875862);//C
    glVertex2f(-0.0709058090473, -0.8127109944601);//D
    glVertex2f(-0.0707110227951, -0.8219633414436);//E
    glVertex2f(-0.0905792205282, -0.8218659483175);//F
    glEnd();

    //Front Window
    glBegin(GL_POLYGON);
    glColor3ub(89,203,232);
    glVertex2f(-0.1999184225531, -0.8676394567482);//C
    glVertex2f(-0.1499640703112, -0.8330342071505);//D
    glVertex2f(-0.0709859603422, -0.8330342071505);//E
    glVertex2f(-0.0707068857487, -0.8676394567482);//F
    glEnd();

    //Back Window
    glBegin(GL_POLYGON);
    glColor3ub(89,203,232);
    glVertex2f(-0.059155273315, -0.8333661019481);//C
    glVertex2f(0.0192760403068, -0.8331853846356);//D
    glVertex2f(0.0396970966185, -0.8682445432592);//E
    glVertex2f(-0.0589745560025, -0.8677023913217);//F
    glEnd();

    //Front Bumper
    glBegin(GL_POLYGON);
    glColor3ub(54,69,79);
    glVertex2f(-0.3590619301494, -0.9351920295936);//C
    glVertex2f(-0.3211878633978, -0.9350632062374);//D
    glVertex2f(-0.3213166867541, -0.9492337754301);//E
    glVertex2f(-0.359319576862, -0.9487184820049);//F
    glEnd();

    //Back Bumper
    glBegin(GL_POLYGON);
    glColor3ub(54,69,79);
    glVertex2f(0.121461923388, -0.9351619839148);//C
    glVertex2f(0.169355555797, -0.9349176286474);//D
    glVertex2f(0.17, -0.95);//E
    glVertex2f(0.121461923388, -0.9493345894236);//F
    glEnd();





    ///wheel 1
    Circle(-0.2, -0.95,0.03,60,82,145);
    Circle(-0.2, -0.95,0.015,178,190,181);

     ///wheel 2
    Circle(0, -0.95,0.03,60,82,145);
    Circle(0, -0.95,0.015,178,190,181);




}

void car2(){

    glBegin(GL_POLYGON);
    glColor3ub(65,117,113);
    glVertex2f(0.4899901305445, -0.8784176892547);//C
    glVertex2f(0.5288482872607, -0.8785028911932);//D
    glVertex2f(0.5288344373212, -0.8974240335978);//E
    glVertex2f(0.8211893694802, -0.8976530177257);//F
    glVertex2f(0.8212245821132, -0.8783763317601);//G
    glVertex2f(0.8607075594438, -0.8783227279654);//H
    glVertex2f(0.8498943719446, -0.8487587422724);//I
    glVertex2f(0.7809056428804, -0.8492264624694);//J
    glVertex2f(0.7595708906256, -0.7969961305323);//K
    glVertex2f(0.6097655472332, -0.7967094046423);//L
    glVertex2f(0.5789804576445, -0.8485864015884);//M
    glVertex2f(0.49, -0.85);//N
    glVertex2f(0.490920948072, -0.8577015209547);//O
    glVertex2f(0.4956810397718, -0.8575252212621);//P
    glEnd();

    //Front Bumper
    glBegin(GL_POLYGON);
    glColor3ub(54,69,79);
    glVertex2f(0.4601410691743, -0.8785381584624);//C
    glVertex2f(0.529546903407, -0.8787304183911);//D
    glVertex2f(0.5297391633356, -0.8981486711819);//E
    glVertex2f(0.4593720294598, -0.8977641513247);//F
    glEnd();

    //Back Bumper
    glBegin(GL_POLYGON);
    glColor3ub(54,69,79);
    glVertex2f(0.8215485482301, -0.878245153351);//C
    glVertex2f(0.8788741780085, -0.8784193953868);//D
    glVertex2f(0.8792226620801, -0.8975860193249);//E
    glVertex2f(0.8212000641585, -0.8974117772891);//F
    glEnd();

    //Front Light
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.4909002443109, -0.8490359666551);//C
    glVertex2f(0.5091244473184, -0.8487388329105);//D
    glVertex2f(0.5093225364815, -0.8570585777617);//E
    glVertex2f(0.4909992888924, -0.8570585777617);//F
    glEnd();

    //Back red Light
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(0.8408067844449, -0.8481531303392);//C
    glVertex2f(0.8498491465297, -0.8483270219177);//D
    glVertex2f(0.8498491465297, -0.8728457344937);//E
    glVertex2f(0.8408067844449, -0.8728457344937);//F
    glEnd();

    //Window
    glBegin(GL_POLYGON);
    glColor3ub(89,203,232);
    glVertex2f(0.591333862886, -0.8462450617455);//C
    glVertex2f(0.62, -0.8);//D
    glVertex2f(0.7507920971234, -0.8014255863031);//E
    glVertex2f(0.769710870677, -0.8462450617455);//F
    glEnd();

    //Lines
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(0.5802435615156, -0.8467254578152);//C
    glVertex2f(0.5803251196822, -0.8493635948698);//D
    glVertex2f(0.7788069373018, -0.8498969374052);//E
    glVertex2f(0.778777224586, -0.8470067185278);//F
    glEnd();

    //Lines
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(0.6930075605046, -0.7973807895741);//C
    glVertex2f(0.6882249260809, -0.797296883707);//D
    glVertex2f(0.6889649231043, -0.8983739851244);//E
    glVertex2f(0.6923945775674, -0.8983739851244);//F
    glEnd();

    //Lines
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.7805633710927, -0.8473144298624);//C
    glVertex2f(0.7805633710927, -0.8492216372109);//D
    glVertex2f(0.7995487533351, -0.8490482547247);//E
    glVertex2f(0.7995920989567, -0.8472710842408);//F
    glEnd();





    ///wheel 1
    Circle(0.6, -0.9,0.03,60,82,145);
    Circle(0.6, -0.9,0.015,178,190,181);

     ///wheel 2
    Circle(0.7506671057178, -0.8985021522263,0.03,60,82,145);
    Circle(0.7506671057178, -0.8985021522263,0.015,178,190,181);








}



void display(){
    glClearColor(0.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    policeCar();
    car2();
    glFlush();
}



int main(int argc, char *argv[])
{
    glutInit(&argc, argv);

    glutInitWindowSize (1000, 1000);
    glutCreateWindow (" policeCar");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
