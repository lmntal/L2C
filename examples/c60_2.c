struct port { void *obj; struct port *ref; };
typedef struct port port;
struct graph {
	int _tag;
	port X;
	union {
		struct {
			port A0;
			port B0;
		} /* c */ ;
	};
};
typedef struct graph graph;
void dome(port *arg0, port *arg1, port *arg2, port *arg3, port *arg4, port *arg5, port *arg6, port *arg7, port *arg8, port *arg9) {
	{
		port *f0_arg0 = malloc(sizeof(port));
		port *f0_arg1 = malloc(sizeof(port));
		port *f0_arg2 = malloc(sizeof(port));
		port *f0_arg3 = malloc(sizeof(port));
		port *f0_arg4 = malloc(sizeof(port));
		port *f1_arg0 = malloc(sizeof(port));
		port *f1_arg1 = malloc(sizeof(port));
		port *f1_arg2 = malloc(sizeof(port));
		port *f1_arg3 = malloc(sizeof(port));
		port *f1_arg4 = malloc(sizeof(port));
		port *f2_arg0 = malloc(sizeof(port));
		port *f2_arg1 = malloc(sizeof(port));
		port *f2_arg2 = malloc(sizeof(port));
		port *f2_arg3 = malloc(sizeof(port));
		port *f2_arg4 = malloc(sizeof(port));
		port *f3_arg0 = malloc(sizeof(port));
		port *f3_arg1 = malloc(sizeof(port));
		port *f3_arg2 = malloc(sizeof(port));
		port *f3_arg3 = malloc(sizeof(port));
		port *f3_arg4 = malloc(sizeof(port));
		port *f4_arg0 = malloc(sizeof(port));
		port *f4_arg1 = malloc(sizeof(port));
		port *f4_arg2 = malloc(sizeof(port));
		port *f4_arg3 = malloc(sizeof(port));
		port *f4_arg4 = malloc(sizeof(port));
		port *f5_arg0 = malloc(sizeof(port));
		port *f5_arg1 = malloc(sizeof(port));
		port *f5_arg2 = malloc(sizeof(port));
		port *f5_arg3 = malloc(sizeof(port));
		port *f5_arg4 = malloc(sizeof(port));
		(*(*arg0).ref) = ((port){ .ref = f1_arg0 });
		(*f1_arg0) = (*arg0);
		(*(*arg1).ref) = ((port){ .ref = f1_arg1 });
		(*f1_arg1) = (*arg1);
		(*f0_arg0) = ((port){ .ref = f1_arg3 });
		(*f1_arg3) = ((port){ .ref = f0_arg0 });
		(*(*arg2).ref) = ((port){ .ref = f2_arg0 });
		(*f2_arg0) = (*arg2);
		(*(*arg3).ref) = ((port){ .ref = f2_arg1 });
		(*f2_arg1) = (*arg3);
		(*f0_arg1) = ((port){ .ref = f2_arg3 });
		(*f2_arg3) = ((port){ .ref = f0_arg1 });
		(*f1_arg2) = ((port){ .ref = f2_arg4 });
		(*f2_arg4) = ((port){ .ref = f1_arg2 });
		(*(*arg4).ref) = ((port){ .ref = f3_arg0 });
		(*f3_arg0) = (*arg4);
		(*(*arg5).ref) = ((port){ .ref = f3_arg1 });
		(*f3_arg1) = (*arg5);
		(*f0_arg2) = ((port){ .ref = f3_arg3 });
		(*f3_arg3) = ((port){ .ref = f0_arg2 });
		(*f2_arg2) = ((port){ .ref = f3_arg4 });
		(*f3_arg4) = ((port){ .ref = f2_arg2 });
		(*(*arg6).ref) = ((port){ .ref = f4_arg0 });
		(*f4_arg0) = (*arg6);
		(*(*arg7).ref) = ((port){ .ref = f4_arg1 });
		(*f4_arg1) = (*arg7);
		(*f0_arg3) = ((port){ .ref = f4_arg3 });
		(*f4_arg3) = ((port){ .ref = f0_arg3 });
		(*f3_arg2) = ((port){ .ref = f4_arg4 });
		(*f4_arg4) = ((port){ .ref = f3_arg2 });
		(*(*arg8).ref) = ((port){ .ref = f5_arg0 });
		(*f5_arg0) = (*arg8);
		(*(*arg9).ref) = ((port){ .ref = f5_arg1 });
		(*f5_arg1) = (*arg9);
		(*f1_arg4) = ((port){ .ref = f5_arg2 });
		(*f5_arg2) = ((port){ .ref = f1_arg4 });
		(*f0_arg4) = ((port){ .ref = f5_arg3 });
		(*f5_arg3) = ((port){ .ref = f0_arg4 });
		(*f4_arg2) = ((port){ .ref = f5_arg4 });
		(*f5_arg4) = ((port){ .ref = f4_arg2 });
		free(arg9); /* port */
		free(arg8); /* port */
		free(arg7); /* port */
		free(arg6); /* port */
		free(arg5); /* port */
		free(arg4); /* port */
		free(arg3); /* port */
		free(arg2); /* port */
		free(arg1); /* port */
		free(arg0); /* port */
		p(f0_arg0, f0_arg1, f0_arg2, f0_arg3, f0_arg4);
		p(f1_arg0, f1_arg1, f1_arg2, f1_arg3, f1_arg4);
		p(f2_arg0, f2_arg1, f2_arg2, f2_arg3, f2_arg4);
		p(f3_arg0, f3_arg1, f3_arg2, f3_arg3, f3_arg4);
		p(f4_arg0, f4_arg1, f4_arg2, f4_arg3, f4_arg4);
		p(f5_arg0, f5_arg1, f5_arg2, f5_arg3, f5_arg4);
		return;
	}
}
void init(port *arg0) {
	{
		port *f0_arg0 = malloc(sizeof(port));
		port *f0_arg1 = malloc(sizeof(port));
		port *f0_arg2 = malloc(sizeof(port));
		port *f0_arg3 = malloc(sizeof(port));
		port *f0_arg4 = malloc(sizeof(port));
		port *f0_arg5 = malloc(sizeof(port));
		port *f0_arg6 = malloc(sizeof(port));
		port *f0_arg7 = malloc(sizeof(port));
		port *f0_arg8 = malloc(sizeof(port));
		port *f0_arg9 = malloc(sizeof(port));
		port *f1_arg0 = malloc(sizeof(port));
		port *f1_arg1 = malloc(sizeof(port));
		port *f1_arg2 = malloc(sizeof(port));
		port *f1_arg3 = malloc(sizeof(port));
		port *f1_arg4 = malloc(sizeof(port));
		port *f1_arg5 = malloc(sizeof(port));
		port *f1_arg6 = malloc(sizeof(port));
		port *f1_arg7 = malloc(sizeof(port));
		port *f1_arg8 = malloc(sizeof(port));
		port *f1_arg9 = malloc(sizeof(port));
		(*f0_arg0) = ((port){ .ref = f1_arg0 });
		(*f1_arg0) = ((port){ .ref = f0_arg0 });
		(*f0_arg9) = ((port){ .ref = f1_arg1 });
		(*f1_arg1) = ((port){ .ref = f0_arg9 });
		(*f0_arg8) = ((port){ .ref = f1_arg2 });
		(*f1_arg2) = ((port){ .ref = f0_arg8 });
		(*f0_arg7) = ((port){ .ref = f1_arg3 });
		(*f1_arg3) = ((port){ .ref = f0_arg7 });
		(*f0_arg6) = ((port){ .ref = f1_arg4 });
		(*f1_arg4) = ((port){ .ref = f0_arg6 });
		(*f0_arg5) = ((port){ .ref = f1_arg5 });
		(*f1_arg5) = ((port){ .ref = f0_arg5 });
		(*f0_arg4) = ((port){ .ref = f1_arg6 });
		(*f1_arg6) = ((port){ .ref = f0_arg4 });
		(*f0_arg3) = ((port){ .ref = f1_arg7 });
		(*f1_arg7) = ((port){ .ref = f0_arg3 });
		(*f0_arg2) = ((port){ .ref = f1_arg8 });
		(*f1_arg8) = ((port){ .ref = f0_arg2 });
		(*f0_arg1) = ((port){ .ref = f1_arg9 });
		(*f1_arg9) = ((port){ .ref = f0_arg1 });
		free(arg0); /* port */
		dome(f0_arg0, f0_arg1, f0_arg2, f0_arg3, f0_arg4, f0_arg5, f0_arg6, f0_arg7, f0_arg8, f0_arg9);
		dome(f1_arg0, f1_arg1, f1_arg2, f1_arg3, f1_arg4, f1_arg5, f1_arg6, f1_arg7, f1_arg8, f1_arg9);
		return;
	}
}
void p(port *arg0, port *arg1, port *arg2, port *arg3, port *arg4) {
	{
		graph *v0 = malloc(sizeof(graph));
		graph *v1 = malloc(sizeof(graph));
		graph *v2 = malloc(sizeof(graph));
		graph *v3 = malloc(sizeof(graph));
		graph *v4 = malloc(sizeof(graph));
		v0->_tag = 1; /* c */
		v1->_tag = 1; /* c */
		v2->_tag = 1; /* c */
		v3->_tag = 1; /* c */
		v4->_tag = 1; /* c */
		(*(*arg4).ref) = ((port){ .obj = v0, .ref = &v0->A0 });
		v0->A0 = (*arg4);
		(*(*arg3).ref) = ((port){ .obj = v1, .ref = &v1->A0 });
		v1->A0 = (*arg3);
		v0->X = ((port){ .obj = v1, .ref = &v1->B0 });
		v1->B0 = ((port){ .obj = v0, .ref = &v0->X });
		(*(*arg2).ref) = ((port){ .obj = v2, .ref = &v2->A0 });
		v2->A0 = (*arg2);
		v1->X = ((port){ .obj = v2, .ref = &v2->B0 });
		v2->B0 = ((port){ .obj = v1, .ref = &v1->X });
		(*(*arg1).ref) = ((port){ .obj = v3, .ref = &v3->A0 });
		v3->A0 = (*arg1);
		v2->X = ((port){ .obj = v3, .ref = &v3->B0 });
		v3->B0 = ((port){ .obj = v2, .ref = &v2->X });
		(*(*arg0).ref) = ((port){ .obj = v4, .ref = &v4->A0 });
		v4->A0 = (*arg0);
		v3->X = ((port){ .obj = v4, .ref = &v4->B0 });
		v4->B0 = ((port){ .obj = v3, .ref = &v3->X });
		v0->B0 = ((port){ .obj = v4, .ref = &v4->X });
		v4->X = ((port){ .obj = v0, .ref = &v0->B0 });
		free(arg4); /* port */
		free(arg3); /* port */
		free(arg2); /* port */
		free(arg1); /* port */
		free(arg0); /* port */
		return;
	}
}
