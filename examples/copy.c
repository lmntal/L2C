struct port { void *obj; struct port *ref; };
typedef struct port port;
struct graph {
	int _tag;
	port X;
	union {
		struct {
			port A0;
		} /* n2 */ ;
		struct {
			port A1;
			port B1;
		} /* n3 */ ;
		struct {
			port A2;
			port B2;
			port C2;
		} /* n4 */ ;
	};
};
typedef struct graph graph;
struct copy_arg {
	int _tag;
	port X;
	union {
		struct {
			port A0;
		} /* e */ ;
		struct {
			port A1;
			port B1;
		} /* b */ ;
	};
};
typedef struct copy_arg copy_arg;
void copy(port *arg0, port *arg1, port *arg2) {
	{
		if ((*arg0).obj && ((copy_arg *)(*arg0).obj)->_tag == 4) {
			if ((*arg0).ref == &((copy_arg *)(*arg0).obj)->X) {
				if (((port)((copy_arg *)(*arg0).obj)->A0).obj && ((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->_tag == 1) {
					if (((port)((copy_arg *)(*arg0).obj)->A0).ref == &((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X) {
						port *f0_arg0 = malloc(sizeof(port));
						port *f0_arg1 = malloc(sizeof(port));
						port *f0_arg2 = malloc(sizeof(port));
						copy_arg *v0 = malloc(sizeof(copy_arg));
						graph *v1 = malloc(sizeof(graph));
						graph *v2 = malloc(sizeof(graph));
						v0->_tag = 4; /* e */
						v1->_tag = 1; /* n2 */
						v2->_tag = 1; /* n2 */
						v0->X = ((port){ .ref = f0_arg0 });
						(*f0_arg0) = ((port){ .obj = v0, .ref = &v0->X });
						v1->A0 = ((port){ .ref = f0_arg1 });
						(*f0_arg1) = ((port){ .obj = v1, .ref = &v1->A0 });
						v2->A0 = ((port){ .ref = f0_arg2 });
						(*f0_arg2) = ((port){ .obj = v2, .ref = &v2->A0 });
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A0).ref) = ((port){ .obj = v0, .ref = &v0->A0 });
						v0->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A0);
						(*(*arg1).ref) = ((port){ .obj = v1, .ref = &v1->X });
						v1->X = (*arg1);
						(*(*arg2).ref) = ((port){ .obj = v2, .ref = &v2->X });
						v2->X = (*arg2);
						free(arg2); /* port */
						free(arg1); /* port */
						free((*arg0).obj); /* copy_arg */
						free(arg0); /* port */
						free(((port)((copy_arg *)(*arg0).obj)->A0).obj); /* graph */
						copy(f0_arg0, f0_arg1, f0_arg2);
						return;
					}
				}
			}
		}
	}
	{
		if ((*arg0).obj && ((copy_arg *)(*arg0).obj)->_tag == 4) {
			if ((*arg0).ref == &((copy_arg *)(*arg0).obj)->X) {
				if (((port)((copy_arg *)(*arg0).obj)->A0).obj && ((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->_tag == 1) {
					if (((port)((copy_arg *)(*arg0).obj)->A0).ref == &((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A0) {
						port *f0_arg0 = malloc(sizeof(port));
						port *f0_arg1 = malloc(sizeof(port));
						port *f0_arg2 = malloc(sizeof(port));
						copy_arg *v0 = malloc(sizeof(copy_arg));
						graph *v1 = malloc(sizeof(graph));
						graph *v2 = malloc(sizeof(graph));
						v0->_tag = 4; /* e */
						v1->_tag = 1; /* n2 */
						v2->_tag = 1; /* n2 */
						v0->X = ((port){ .ref = f0_arg0 });
						(*f0_arg0) = ((port){ .obj = v0, .ref = &v0->X });
						v1->X = ((port){ .ref = f0_arg1 });
						(*f0_arg1) = ((port){ .obj = v1, .ref = &v1->X });
						v2->X = ((port){ .ref = f0_arg2 });
						(*f0_arg2) = ((port){ .obj = v2, .ref = &v2->X });
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X).ref) = ((port){ .obj = v0, .ref = &v0->A0 });
						v0->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X);
						(*(*arg1).ref) = ((port){ .obj = v1, .ref = &v1->A0 });
						v1->A0 = (*arg1);
						(*(*arg2).ref) = ((port){ .obj = v2, .ref = &v2->A0 });
						v2->A0 = (*arg2);
						free(arg2); /* port */
						free(arg1); /* port */
						free((*arg0).obj); /* copy_arg */
						free(arg0); /* port */
						free(((port)((copy_arg *)(*arg0).obj)->A0).obj); /* graph */
						copy(f0_arg0, f0_arg1, f0_arg2);
						return;
					}
				}
			}
		}
	}
	{
		if ((*arg0).obj && ((copy_arg *)(*arg0).obj)->_tag == 4) {
			if ((*arg0).ref == &((copy_arg *)(*arg0).obj)->X) {
				if (((port)((copy_arg *)(*arg0).obj)->A0).obj && ((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->_tag == 2) {
					if (((port)((copy_arg *)(*arg0).obj)->A0).ref == &((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X) {
						port *f0_arg0 = malloc(sizeof(port));
						port *f0_arg1 = malloc(sizeof(port));
						port *f0_arg2 = malloc(sizeof(port));
						port *f1_arg0 = malloc(sizeof(port));
						port *f1_arg1 = malloc(sizeof(port));
						port *f1_arg2 = malloc(sizeof(port));
						copy_arg *v0 = malloc(sizeof(copy_arg));
						copy_arg *v1 = malloc(sizeof(copy_arg));
						graph *v2 = malloc(sizeof(graph));
						graph *v3 = malloc(sizeof(graph));
						v0->_tag = 4; /* e */
						v1->_tag = 4; /* e */
						v2->_tag = 2; /* n3 */
						v3->_tag = 2; /* n3 */
						v0->X = ((port){ .ref = f0_arg0 });
						(*f0_arg0) = ((port){ .obj = v0, .ref = &v0->X });
						v2->A1 = ((port){ .ref = f0_arg1 });
						(*f0_arg1) = ((port){ .obj = v2, .ref = &v2->A1 });
						v3->A1 = ((port){ .ref = f0_arg2 });
						(*f0_arg2) = ((port){ .obj = v3, .ref = &v3->A1 });
						v1->X = ((port){ .ref = f1_arg0 });
						(*f1_arg0) = ((port){ .obj = v1, .ref = &v1->X });
						v2->B1 = ((port){ .ref = f1_arg1 });
						(*f1_arg1) = ((port){ .obj = v2, .ref = &v2->B1 });
						v3->B1 = ((port){ .ref = f1_arg2 });
						(*f1_arg2) = ((port){ .obj = v3, .ref = &v3->B1 });
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A1).ref) = ((port){ .obj = v0, .ref = &v0->A0 });
						v0->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A1);
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->B1).ref) = ((port){ .obj = v1, .ref = &v1->A0 });
						v1->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->B1);
						(*(*arg1).ref) = ((port){ .obj = v2, .ref = &v2->X });
						v2->X = (*arg1);
						(*(*arg2).ref) = ((port){ .obj = v3, .ref = &v3->X });
						v3->X = (*arg2);
						free(arg2); /* port */
						free(arg1); /* port */
						free((*arg0).obj); /* copy_arg */
						free(arg0); /* port */
						free(((port)((copy_arg *)(*arg0).obj)->A0).obj); /* graph */
						copy(f0_arg0, f0_arg1, f0_arg2);
						copy(f1_arg0, f1_arg1, f1_arg2);
						return;
					}
				}
			}
		}
	}
	{
		if ((*arg0).obj && ((copy_arg *)(*arg0).obj)->_tag == 4) {
			if ((*arg0).ref == &((copy_arg *)(*arg0).obj)->X) {
				if (((port)((copy_arg *)(*arg0).obj)->A0).obj && ((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->_tag == 2) {
					if (((port)((copy_arg *)(*arg0).obj)->A0).ref == &((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A1) {
						port *f0_arg0 = malloc(sizeof(port));
						port *f0_arg1 = malloc(sizeof(port));
						port *f0_arg2 = malloc(sizeof(port));
						port *f1_arg0 = malloc(sizeof(port));
						port *f1_arg1 = malloc(sizeof(port));
						port *f1_arg2 = malloc(sizeof(port));
						copy_arg *v0 = malloc(sizeof(copy_arg));
						copy_arg *v1 = malloc(sizeof(copy_arg));
						graph *v2 = malloc(sizeof(graph));
						graph *v3 = malloc(sizeof(graph));
						v0->_tag = 4; /* e */
						v1->_tag = 4; /* e */
						v2->_tag = 2; /* n3 */
						v3->_tag = 2; /* n3 */
						v0->X = ((port){ .ref = f0_arg0 });
						(*f0_arg0) = ((port){ .obj = v0, .ref = &v0->X });
						v2->B1 = ((port){ .ref = f0_arg1 });
						(*f0_arg1) = ((port){ .obj = v2, .ref = &v2->B1 });
						v3->B1 = ((port){ .ref = f0_arg2 });
						(*f0_arg2) = ((port){ .obj = v3, .ref = &v3->B1 });
						v1->X = ((port){ .ref = f1_arg0 });
						(*f1_arg0) = ((port){ .obj = v1, .ref = &v1->X });
						v2->X = ((port){ .ref = f1_arg1 });
						(*f1_arg1) = ((port){ .obj = v2, .ref = &v2->X });
						v3->X = ((port){ .ref = f1_arg2 });
						(*f1_arg2) = ((port){ .obj = v3, .ref = &v3->X });
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->B1).ref) = ((port){ .obj = v0, .ref = &v0->A0 });
						v0->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->B1);
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X).ref) = ((port){ .obj = v1, .ref = &v1->A0 });
						v1->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X);
						(*(*arg1).ref) = ((port){ .obj = v2, .ref = &v2->A1 });
						v2->A1 = (*arg1);
						(*(*arg2).ref) = ((port){ .obj = v3, .ref = &v3->A1 });
						v3->A1 = (*arg2);
						free(arg2); /* port */
						free(arg1); /* port */
						free((*arg0).obj); /* copy_arg */
						free(arg0); /* port */
						free(((port)((copy_arg *)(*arg0).obj)->A0).obj); /* graph */
						copy(f0_arg0, f0_arg1, f0_arg2);
						copy(f1_arg0, f1_arg1, f1_arg2);
						return;
					}
				}
			}
		}
	}
	{
		if ((*arg0).obj && ((copy_arg *)(*arg0).obj)->_tag == 4) {
			if ((*arg0).ref == &((copy_arg *)(*arg0).obj)->X) {
				if (((port)((copy_arg *)(*arg0).obj)->A0).obj && ((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->_tag == 2) {
					if (((port)((copy_arg *)(*arg0).obj)->A0).ref == &((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->B1) {
						port *f0_arg0 = malloc(sizeof(port));
						port *f0_arg1 = malloc(sizeof(port));
						port *f0_arg2 = malloc(sizeof(port));
						port *f1_arg0 = malloc(sizeof(port));
						port *f1_arg1 = malloc(sizeof(port));
						port *f1_arg2 = malloc(sizeof(port));
						copy_arg *v0 = malloc(sizeof(copy_arg));
						copy_arg *v1 = malloc(sizeof(copy_arg));
						graph *v2 = malloc(sizeof(graph));
						graph *v3 = malloc(sizeof(graph));
						v0->_tag = 4; /* e */
						v1->_tag = 4; /* e */
						v2->_tag = 2; /* n3 */
						v3->_tag = 2; /* n3 */
						v0->X = ((port){ .ref = f0_arg0 });
						(*f0_arg0) = ((port){ .obj = v0, .ref = &v0->X });
						v2->X = ((port){ .ref = f0_arg1 });
						(*f0_arg1) = ((port){ .obj = v2, .ref = &v2->X });
						v3->X = ((port){ .ref = f0_arg2 });
						(*f0_arg2) = ((port){ .obj = v3, .ref = &v3->X });
						v1->X = ((port){ .ref = f1_arg0 });
						(*f1_arg0) = ((port){ .obj = v1, .ref = &v1->X });
						v2->A1 = ((port){ .ref = f1_arg1 });
						(*f1_arg1) = ((port){ .obj = v2, .ref = &v2->A1 });
						v3->A1 = ((port){ .ref = f1_arg2 });
						(*f1_arg2) = ((port){ .obj = v3, .ref = &v3->A1 });
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X).ref) = ((port){ .obj = v0, .ref = &v0->A0 });
						v0->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X);
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A1).ref) = ((port){ .obj = v1, .ref = &v1->A0 });
						v1->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A1);
						(*(*arg1).ref) = ((port){ .obj = v2, .ref = &v2->B1 });
						v2->B1 = (*arg1);
						(*(*arg2).ref) = ((port){ .obj = v3, .ref = &v3->B1 });
						v3->B1 = (*arg2);
						free(arg2); /* port */
						free(arg1); /* port */
						free((*arg0).obj); /* copy_arg */
						free(arg0); /* port */
						free(((port)((copy_arg *)(*arg0).obj)->A0).obj); /* graph */
						copy(f0_arg0, f0_arg1, f0_arg2);
						copy(f1_arg0, f1_arg1, f1_arg2);
						return;
					}
				}
			}
		}
	}
	{
		if ((*arg0).obj && ((copy_arg *)(*arg0).obj)->_tag == 4) {
			if ((*arg0).ref == &((copy_arg *)(*arg0).obj)->X) {
				if (((port)((copy_arg *)(*arg0).obj)->A0).obj && ((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->_tag == 3) {
					if (((port)((copy_arg *)(*arg0).obj)->A0).ref == &((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X) {
						port *f0_arg0 = malloc(sizeof(port));
						port *f0_arg1 = malloc(sizeof(port));
						port *f0_arg2 = malloc(sizeof(port));
						port *f1_arg0 = malloc(sizeof(port));
						port *f1_arg1 = malloc(sizeof(port));
						port *f1_arg2 = malloc(sizeof(port));
						port *f2_arg0 = malloc(sizeof(port));
						port *f2_arg1 = malloc(sizeof(port));
						port *f2_arg2 = malloc(sizeof(port));
						copy_arg *v0 = malloc(sizeof(copy_arg));
						copy_arg *v1 = malloc(sizeof(copy_arg));
						copy_arg *v2 = malloc(sizeof(copy_arg));
						graph *v3 = malloc(sizeof(graph));
						graph *v4 = malloc(sizeof(graph));
						v0->_tag = 4; /* e */
						v1->_tag = 4; /* e */
						v2->_tag = 4; /* e */
						v3->_tag = 3; /* n4 */
						v4->_tag = 3; /* n4 */
						v0->X = ((port){ .ref = f0_arg0 });
						(*f0_arg0) = ((port){ .obj = v0, .ref = &v0->X });
						v3->A2 = ((port){ .ref = f0_arg1 });
						(*f0_arg1) = ((port){ .obj = v3, .ref = &v3->A2 });
						v4->A2 = ((port){ .ref = f0_arg2 });
						(*f0_arg2) = ((port){ .obj = v4, .ref = &v4->A2 });
						v1->X = ((port){ .ref = f1_arg0 });
						(*f1_arg0) = ((port){ .obj = v1, .ref = &v1->X });
						v3->B2 = ((port){ .ref = f1_arg1 });
						(*f1_arg1) = ((port){ .obj = v3, .ref = &v3->B2 });
						v4->B2 = ((port){ .ref = f1_arg2 });
						(*f1_arg2) = ((port){ .obj = v4, .ref = &v4->B2 });
						v2->X = ((port){ .ref = f2_arg0 });
						(*f2_arg0) = ((port){ .obj = v2, .ref = &v2->X });
						v3->C2 = ((port){ .ref = f2_arg1 });
						(*f2_arg1) = ((port){ .obj = v3, .ref = &v3->C2 });
						v4->C2 = ((port){ .ref = f2_arg2 });
						(*f2_arg2) = ((port){ .obj = v4, .ref = &v4->C2 });
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A2).ref) = ((port){ .obj = v0, .ref = &v0->A0 });
						v0->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A2);
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->B2).ref) = ((port){ .obj = v1, .ref = &v1->A0 });
						v1->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->B2);
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->C2).ref) = ((port){ .obj = v2, .ref = &v2->A0 });
						v2->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->C2);
						(*(*arg1).ref) = ((port){ .obj = v3, .ref = &v3->X });
						v3->X = (*arg1);
						(*(*arg2).ref) = ((port){ .obj = v4, .ref = &v4->X });
						v4->X = (*arg2);
						free(arg2); /* port */
						free(arg1); /* port */
						free((*arg0).obj); /* copy_arg */
						free(arg0); /* port */
						free(((port)((copy_arg *)(*arg0).obj)->A0).obj); /* graph */
						copy(f0_arg0, f0_arg1, f0_arg2);
						copy(f1_arg0, f1_arg1, f1_arg2);
						copy(f2_arg0, f2_arg1, f2_arg2);
						return;
					}
				}
			}
		}
	}
	{
		if ((*arg0).obj && ((copy_arg *)(*arg0).obj)->_tag == 4) {
			if ((*arg0).ref == &((copy_arg *)(*arg0).obj)->X) {
				if (((port)((copy_arg *)(*arg0).obj)->A0).obj && ((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->_tag == 3) {
					if (((port)((copy_arg *)(*arg0).obj)->A0).ref == &((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A2) {
						port *f0_arg0 = malloc(sizeof(port));
						port *f0_arg1 = malloc(sizeof(port));
						port *f0_arg2 = malloc(sizeof(port));
						port *f1_arg0 = malloc(sizeof(port));
						port *f1_arg1 = malloc(sizeof(port));
						port *f1_arg2 = malloc(sizeof(port));
						port *f2_arg0 = malloc(sizeof(port));
						port *f2_arg1 = malloc(sizeof(port));
						port *f2_arg2 = malloc(sizeof(port));
						copy_arg *v0 = malloc(sizeof(copy_arg));
						copy_arg *v1 = malloc(sizeof(copy_arg));
						copy_arg *v2 = malloc(sizeof(copy_arg));
						graph *v3 = malloc(sizeof(graph));
						graph *v4 = malloc(sizeof(graph));
						v0->_tag = 4; /* e */
						v1->_tag = 4; /* e */
						v2->_tag = 4; /* e */
						v3->_tag = 3; /* n4 */
						v4->_tag = 3; /* n4 */
						v0->X = ((port){ .ref = f0_arg0 });
						(*f0_arg0) = ((port){ .obj = v0, .ref = &v0->X });
						v3->B2 = ((port){ .ref = f0_arg1 });
						(*f0_arg1) = ((port){ .obj = v3, .ref = &v3->B2 });
						v4->B2 = ((port){ .ref = f0_arg2 });
						(*f0_arg2) = ((port){ .obj = v4, .ref = &v4->B2 });
						v1->X = ((port){ .ref = f1_arg0 });
						(*f1_arg0) = ((port){ .obj = v1, .ref = &v1->X });
						v3->C2 = ((port){ .ref = f1_arg1 });
						(*f1_arg1) = ((port){ .obj = v3, .ref = &v3->C2 });
						v4->C2 = ((port){ .ref = f1_arg2 });
						(*f1_arg2) = ((port){ .obj = v4, .ref = &v4->C2 });
						v2->X = ((port){ .ref = f2_arg0 });
						(*f2_arg0) = ((port){ .obj = v2, .ref = &v2->X });
						v3->X = ((port){ .ref = f2_arg1 });
						(*f2_arg1) = ((port){ .obj = v3, .ref = &v3->X });
						v4->X = ((port){ .ref = f2_arg2 });
						(*f2_arg2) = ((port){ .obj = v4, .ref = &v4->X });
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->B2).ref) = ((port){ .obj = v0, .ref = &v0->A0 });
						v0->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->B2);
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->C2).ref) = ((port){ .obj = v1, .ref = &v1->A0 });
						v1->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->C2);
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X).ref) = ((port){ .obj = v2, .ref = &v2->A0 });
						v2->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X);
						(*(*arg1).ref) = ((port){ .obj = v3, .ref = &v3->A2 });
						v3->A2 = (*arg1);
						(*(*arg2).ref) = ((port){ .obj = v4, .ref = &v4->A2 });
						v4->A2 = (*arg2);
						free(arg2); /* port */
						free(arg1); /* port */
						free((*arg0).obj); /* copy_arg */
						free(arg0); /* port */
						free(((port)((copy_arg *)(*arg0).obj)->A0).obj); /* graph */
						copy(f0_arg0, f0_arg1, f0_arg2);
						copy(f1_arg0, f1_arg1, f1_arg2);
						copy(f2_arg0, f2_arg1, f2_arg2);
						return;
					}
				}
			}
		}
	}
	{
		if ((*arg0).obj && ((copy_arg *)(*arg0).obj)->_tag == 4) {
			if ((*arg0).ref == &((copy_arg *)(*arg0).obj)->X) {
				if (((port)((copy_arg *)(*arg0).obj)->A0).obj && ((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->_tag == 3) {
					if (((port)((copy_arg *)(*arg0).obj)->A0).ref == &((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->B2) {
						port *f0_arg0 = malloc(sizeof(port));
						port *f0_arg1 = malloc(sizeof(port));
						port *f0_arg2 = malloc(sizeof(port));
						port *f1_arg0 = malloc(sizeof(port));
						port *f1_arg1 = malloc(sizeof(port));
						port *f1_arg2 = malloc(sizeof(port));
						port *f2_arg0 = malloc(sizeof(port));
						port *f2_arg1 = malloc(sizeof(port));
						port *f2_arg2 = malloc(sizeof(port));
						copy_arg *v0 = malloc(sizeof(copy_arg));
						copy_arg *v1 = malloc(sizeof(copy_arg));
						copy_arg *v2 = malloc(sizeof(copy_arg));
						graph *v3 = malloc(sizeof(graph));
						graph *v4 = malloc(sizeof(graph));
						v0->_tag = 4; /* e */
						v1->_tag = 4; /* e */
						v2->_tag = 4; /* e */
						v3->_tag = 3; /* n4 */
						v4->_tag = 3; /* n4 */
						v0->X = ((port){ .ref = f0_arg0 });
						(*f0_arg0) = ((port){ .obj = v0, .ref = &v0->X });
						v3->C2 = ((port){ .ref = f0_arg1 });
						(*f0_arg1) = ((port){ .obj = v3, .ref = &v3->C2 });
						v4->C2 = ((port){ .ref = f0_arg2 });
						(*f0_arg2) = ((port){ .obj = v4, .ref = &v4->C2 });
						v1->X = ((port){ .ref = f1_arg0 });
						(*f1_arg0) = ((port){ .obj = v1, .ref = &v1->X });
						v3->X = ((port){ .ref = f1_arg1 });
						(*f1_arg1) = ((port){ .obj = v3, .ref = &v3->X });
						v4->X = ((port){ .ref = f1_arg2 });
						(*f1_arg2) = ((port){ .obj = v4, .ref = &v4->X });
						v2->X = ((port){ .ref = f2_arg0 });
						(*f2_arg0) = ((port){ .obj = v2, .ref = &v2->X });
						v3->A2 = ((port){ .ref = f2_arg1 });
						(*f2_arg1) = ((port){ .obj = v3, .ref = &v3->A2 });
						v4->A2 = ((port){ .ref = f2_arg2 });
						(*f2_arg2) = ((port){ .obj = v4, .ref = &v4->A2 });
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->C2).ref) = ((port){ .obj = v0, .ref = &v0->A0 });
						v0->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->C2);
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X).ref) = ((port){ .obj = v1, .ref = &v1->A0 });
						v1->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X);
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A2).ref) = ((port){ .obj = v2, .ref = &v2->A0 });
						v2->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A2);
						(*(*arg1).ref) = ((port){ .obj = v3, .ref = &v3->B2 });
						v3->B2 = (*arg1);
						(*(*arg2).ref) = ((port){ .obj = v4, .ref = &v4->B2 });
						v4->B2 = (*arg2);
						free(arg2); /* port */
						free(arg1); /* port */
						free((*arg0).obj); /* copy_arg */
						free(arg0); /* port */
						free(((port)((copy_arg *)(*arg0).obj)->A0).obj); /* graph */
						copy(f0_arg0, f0_arg1, f0_arg2);
						copy(f1_arg0, f1_arg1, f1_arg2);
						copy(f2_arg0, f2_arg1, f2_arg2);
						return;
					}
				}
			}
		}
	}
	{
		if ((*arg0).obj && ((copy_arg *)(*arg0).obj)->_tag == 4) {
			if ((*arg0).ref == &((copy_arg *)(*arg0).obj)->X) {
				if (((port)((copy_arg *)(*arg0).obj)->A0).obj && ((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->_tag == 3) {
					if (((port)((copy_arg *)(*arg0).obj)->A0).ref == &((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->C2) {
						port *f0_arg0 = malloc(sizeof(port));
						port *f0_arg1 = malloc(sizeof(port));
						port *f0_arg2 = malloc(sizeof(port));
						port *f1_arg0 = malloc(sizeof(port));
						port *f1_arg1 = malloc(sizeof(port));
						port *f1_arg2 = malloc(sizeof(port));
						port *f2_arg0 = malloc(sizeof(port));
						port *f2_arg1 = malloc(sizeof(port));
						port *f2_arg2 = malloc(sizeof(port));
						copy_arg *v0 = malloc(sizeof(copy_arg));
						copy_arg *v1 = malloc(sizeof(copy_arg));
						copy_arg *v2 = malloc(sizeof(copy_arg));
						graph *v3 = malloc(sizeof(graph));
						graph *v4 = malloc(sizeof(graph));
						v0->_tag = 4; /* e */
						v1->_tag = 4; /* e */
						v2->_tag = 4; /* e */
						v3->_tag = 3; /* n4 */
						v4->_tag = 3; /* n4 */
						v0->X = ((port){ .ref = f0_arg0 });
						(*f0_arg0) = ((port){ .obj = v0, .ref = &v0->X });
						v3->X = ((port){ .ref = f0_arg1 });
						(*f0_arg1) = ((port){ .obj = v3, .ref = &v3->X });
						v4->X = ((port){ .ref = f0_arg2 });
						(*f0_arg2) = ((port){ .obj = v4, .ref = &v4->X });
						v1->X = ((port){ .ref = f1_arg0 });
						(*f1_arg0) = ((port){ .obj = v1, .ref = &v1->X });
						v3->A2 = ((port){ .ref = f1_arg1 });
						(*f1_arg1) = ((port){ .obj = v3, .ref = &v3->A2 });
						v4->A2 = ((port){ .ref = f1_arg2 });
						(*f1_arg2) = ((port){ .obj = v4, .ref = &v4->A2 });
						v2->X = ((port){ .ref = f2_arg0 });
						(*f2_arg0) = ((port){ .obj = v2, .ref = &v2->X });
						v3->B2 = ((port){ .ref = f2_arg1 });
						(*f2_arg1) = ((port){ .obj = v3, .ref = &v3->B2 });
						v4->B2 = ((port){ .ref = f2_arg2 });
						(*f2_arg2) = ((port){ .obj = v4, .ref = &v4->B2 });
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X).ref) = ((port){ .obj = v0, .ref = &v0->A0 });
						v0->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X);
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A2).ref) = ((port){ .obj = v1, .ref = &v1->A0 });
						v1->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A2);
						(*((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->B2).ref) = ((port){ .obj = v2, .ref = &v2->A0 });
						v2->A0 = ((port)((graph *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->B2);
						(*(*arg1).ref) = ((port){ .obj = v3, .ref = &v3->C2 });
						v3->C2 = (*arg1);
						(*(*arg2).ref) = ((port){ .obj = v4, .ref = &v4->C2 });
						v4->C2 = (*arg2);
						free(arg2); /* port */
						free(arg1); /* port */
						free((*arg0).obj); /* copy_arg */
						free(arg0); /* port */
						free(((port)((copy_arg *)(*arg0).obj)->A0).obj); /* graph */
						copy(f0_arg0, f0_arg1, f0_arg2);
						copy(f1_arg0, f1_arg1, f1_arg2);
						copy(f2_arg0, f2_arg1, f2_arg2);
						return;
					}
				}
			}
		}
	}
	{
		if ((*arg0).obj && ((copy_arg *)(*arg0).obj)->_tag == 4) {
			if ((*arg0).ref == &((copy_arg *)(*arg0).obj)->X) {
				if (((port)((copy_arg *)(*arg0).obj)->A0).obj && ((copy_arg *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->_tag == 4) {
					if (((port)((copy_arg *)(*arg0).obj)->A0).ref == &((copy_arg *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X) {
						copy_arg *v0 = malloc(sizeof(copy_arg));
						v0->_tag = 5; /* b */
						(*(*arg1).ref) = ((port){ .obj = v0, .ref = &v0->A1 });
						v0->A1 = (*arg1);
						(*(*arg2).ref) = ((port){ .obj = v0, .ref = &v0->B1 });
						v0->B1 = (*arg2);
						(*((port)((copy_arg *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A0).ref) = ((port){ .obj = v0, .ref = &v0->X });
						v0->X = ((port)((copy_arg *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A0);
						free(arg2); /* port */
						free(arg1); /* port */
						free((*arg0).obj); /* copy_arg */
						free(arg0); /* port */
						free(((port)((copy_arg *)(*arg0).obj)->A0).obj); /* copy_arg */
						return;
					}
				}
			}
		}
	}
	{
		if ((*arg0).obj && ((copy_arg *)(*arg0).obj)->_tag == 4) {
			if ((*arg0).ref == &((copy_arg *)(*arg0).obj)->X) {
				if (((port)((copy_arg *)(*arg0).obj)->A0).obj && ((copy_arg *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->_tag == 4) {
					if (((port)((copy_arg *)(*arg0).obj)->A0).ref == &((copy_arg *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->A0) {
						copy_arg *v0 = malloc(sizeof(copy_arg));
						v0->_tag = 5; /* b */
						(*(*arg1).ref) = ((port){ .obj = v0, .ref = &v0->A1 });
						v0->A1 = (*arg1);
						(*(*arg2).ref) = ((port){ .obj = v0, .ref = &v0->B1 });
						v0->B1 = (*arg2);
						(*((port)((copy_arg *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X).ref) = ((port){ .obj = v0, .ref = &v0->X });
						v0->X = ((port)((copy_arg *)((port)((copy_arg *)(*arg0).obj)->A0).obj)->X);
						free(arg2); /* port */
						free(arg1); /* port */
						free((*arg0).obj); /* copy_arg */
						free(arg0); /* port */
						free(((port)((copy_arg *)(*arg0).obj)->A0).obj); /* copy_arg */
						return;
					}
				}
			}
		}
	}
	{
		if ((*arg0).obj && ((copy_arg *)(*arg0).obj)->_tag == 5) {
			if ((*arg0).ref == &((copy_arg *)(*arg0).obj)->X) {
				(*(*arg1).ref) = ((port)((copy_arg *)(*arg0).obj)->A1);
				(*((port)((copy_arg *)(*arg0).obj)->A1).ref) = (*arg1);
				(*(*arg2).ref) = ((port)((copy_arg *)(*arg0).obj)->B1);
				(*((port)((copy_arg *)(*arg0).obj)->B1).ref) = (*arg2);
				free(arg2); /* port */
				free(arg1); /* port */
				free((*arg0).obj); /* copy_arg */
				free(arg0); /* port */
				return;
			}
		}
	}
}
