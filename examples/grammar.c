struct port { void *obj; struct port *ref; };
typedef struct port port;
struct ch {
	int _tag;
	port X;
	union {
		struct {
			port N0;
		} /* a */ ;
		struct {
			port N1;
		} /* b */ ;
		struct {
			port N2;
		} /* c */ ;
	};
};
typedef struct ch ch;
void s_(port *arg0, port *arg1) {
	{
		ch *v0 = malloc(sizeof(ch));
		ch *v1 = malloc(sizeof(ch));
		ch *v2 = malloc(sizeof(ch));
		v0->_tag = 1; /* a */
		v1->_tag = 2; /* b */
		v2->_tag = 3; /* c */
		(*(*arg1).ref) = ((port){ .obj = v0, .ref = &v0->X });
		v0->X = (*arg1);
		v0->N0 = ((port){ .obj = v1, .ref = &v1->X });
		v1->X = ((port){ .obj = v0, .ref = &v0->N0 });
		(*(*arg0).ref) = ((port){ .obj = v2, .ref = &v2->N2 });
		v2->N2 = (*arg0);
		v1->N1 = ((port){ .obj = v2, .ref = &v2->X });
		v2->X = ((port){ .obj = v1, .ref = &v1->N1 });
		free(arg1); /* port */
		free(arg0); /* port */
		return;
	}
	{
		port *f0_arg0 = malloc(sizeof(port));
		port *f0_arg1 = malloc(sizeof(port));
		ch *v0 = malloc(sizeof(ch));
		ch *v1 = malloc(sizeof(ch));
		ch *v3 = malloc(sizeof(ch));
		v0->_tag = 3; /* c */
		v1->_tag = 2; /* b */
		v3->_tag = 1; /* a */
		v1->X = ((port){ .ref = f0_arg0 });
		(*f0_arg0) = ((port){ .obj = v1, .ref = &v1->X });
		v3->N0 = ((port){ .ref = f0_arg1 });
		(*f0_arg1) = ((port){ .obj = v3, .ref = &v3->N0 });
		(*(*arg0).ref) = ((port){ .obj = v0, .ref = &v0->N2 });
		v0->N2 = (*arg0);
		v0->X = ((port){ .obj = v1, .ref = &v1->N1 });
		v1->N1 = ((port){ .obj = v0, .ref = &v0->X });
		(*(*arg1).ref) = ((port){ .obj = v3, .ref = &v3->X });
		v3->X = (*arg1);
		free(arg1); /* port */
		free(arg0); /* port */
		a_(f0_arg0, f0_arg1);
		return;
	}
}
void a_(port *arg0, port *arg1) {
	{
		if ((*arg0).obj && ((ch *)(*arg0).obj)->_tag == 2) {
			if ((*arg0).ref == &((ch *)(*arg0).obj)->X) {
				port *f0_arg0 = malloc(sizeof(port));
				port *f0_arg1 = malloc(sizeof(port));
				ch *v1 = malloc(sizeof(ch));
				v1->_tag = 2; /* b */
				(*((port)((ch *)(*arg0).obj)->N1).ref) = ((port){ .ref = f0_arg0 });
				(*f0_arg0) = ((port)((ch *)(*arg0).obj)->N1);
				v1->N1 = ((port){ .ref = f0_arg1 });
				(*f0_arg1) = ((port){ .obj = v1, .ref = &v1->N1 });
				(*(*arg1).ref) = ((port){ .obj = v1, .ref = &v1->X });
				v1->X = (*arg1);
				free(arg1); /* port */
				free((*arg0).obj); /* ch */
				free(arg0); /* port */
				a_(f0_arg0, f0_arg1);
				return;
			}
		}
	}
	{
		if ((*arg0).obj && ((ch *)(*arg0).obj)->_tag == 3) {
			if ((*arg0).ref == &((ch *)(*arg0).obj)->X) {
				port *f0_arg0 = malloc(sizeof(port));
				port *f0_arg1 = malloc(sizeof(port));
				ch *v0 = malloc(sizeof(ch));
				ch *v1 = malloc(sizeof(ch));
				ch *v2 = malloc(sizeof(ch));
				v0->_tag = 3; /* c */
				v1->_tag = 3; /* c */
				v2->_tag = 2; /* b */
				v2->X = ((port){ .ref = f0_arg0 });
				(*f0_arg0) = ((port){ .obj = v2, .ref = &v2->X });
				(*(*arg1).ref) = ((port){ .ref = f0_arg1 });
				(*f0_arg1) = (*arg1);
				(*((port)((ch *)(*arg0).obj)->N2).ref) = ((port){ .obj = v0, .ref = &v0->N2 });
				v0->N2 = ((port)((ch *)(*arg0).obj)->N2);
				v0->X = ((port){ .obj = v1, .ref = &v1->N2 });
				v1->N2 = ((port){ .obj = v0, .ref = &v0->X });
				v1->X = ((port){ .obj = v2, .ref = &v2->N1 });
				v2->N1 = ((port){ .obj = v1, .ref = &v1->X });
				free(arg1); /* port */
				free((*arg0).obj); /* ch */
				free(arg0); /* port */
				b_(f0_arg0, f0_arg1);
				return;
			}
		}
	}
}
void b_(port *arg0, port *arg1) {
	{
		if ((*arg1).obj && ((ch *)(*arg1).obj)->_tag == 2) {
			if ((*arg1).ref == &((ch *)(*arg1).obj)->N1) {
				port *f0_arg0 = malloc(sizeof(port));
				port *f0_arg1 = malloc(sizeof(port));
				ch *v0 = malloc(sizeof(ch));
				v0->_tag = 2; /* b */
				v0->X = ((port){ .ref = f0_arg0 });
				(*f0_arg0) = ((port){ .obj = v0, .ref = &v0->X });
				(*((port)((ch *)(*arg1).obj)->X).ref) = ((port){ .ref = f0_arg1 });
				(*f0_arg1) = ((port)((ch *)(*arg1).obj)->X);
				(*(*arg0).ref) = ((port){ .obj = v0, .ref = &v0->N1 });
				v0->N1 = (*arg0);
				free((*arg1).obj); /* ch */
				free(arg1); /* port */
				free(arg0); /* port */
				b_(f0_arg0, f0_arg1);
				return;
			}
		}
	}
	{
		if ((*arg1).obj && ((ch *)(*arg1).obj)->_tag == 1) {
			if ((*arg1).ref == &((ch *)(*arg1).obj)->N0) {
				ch *v0 = malloc(sizeof(ch));
				ch *v1 = malloc(sizeof(ch));
				v0->_tag = 1; /* a */
				v1->_tag = 1; /* a */
				(*(*arg0).ref) = ((port){ .obj = v0, .ref = &v0->N0 });
				v0->N0 = (*arg0);
				v0->X = ((port){ .obj = v1, .ref = &v1->N0 });
				v1->N0 = ((port){ .obj = v0, .ref = &v0->X });
				(*((port)((ch *)(*arg1).obj)->X).ref) = ((port){ .obj = v1, .ref = &v1->X });
				v1->X = ((port)((ch *)(*arg1).obj)->X);
				free((*arg1).obj); /* ch */
				free(arg1); /* port */
				free(arg0); /* port */
				return;
			}
		}
	}
	{
		if ((*arg1).obj && ((ch *)(*arg1).obj)->_tag == 1) {
			if ((*arg1).ref == &((ch *)(*arg1).obj)->N0) {
				port *f0_arg0 = malloc(sizeof(port));
				port *f0_arg1 = malloc(sizeof(port));
				ch *v1 = malloc(sizeof(ch));
				ch *v2 = malloc(sizeof(ch));
				v1->_tag = 1; /* a */
				v2->_tag = 1; /* a */
				(*(*arg0).ref) = ((port){ .ref = f0_arg0 });
				(*f0_arg0) = (*arg0);
				v1->N0 = ((port){ .ref = f0_arg1 });
				(*f0_arg1) = ((port){ .obj = v1, .ref = &v1->N0 });
				v1->X = ((port){ .obj = v2, .ref = &v2->N0 });
				v2->N0 = ((port){ .obj = v1, .ref = &v1->X });
				(*((port)((ch *)(*arg1).obj)->X).ref) = ((port){ .obj = v2, .ref = &v2->X });
				v2->X = ((port)((ch *)(*arg1).obj)->X);
				free((*arg1).obj); /* ch */
				free(arg1); /* port */
				free(arg0); /* port */
				a_(f0_arg0, f0_arg1);
				return;
			}
		}
	}
}
