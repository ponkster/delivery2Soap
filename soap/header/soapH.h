/* soapH.h
   Generated by gSOAP 2.8.3 from delivery2Service.h

Copyright(C) 2000-2011, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
1) GPL or 2) Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapH_H
#define soapH_H
#include "soapStub.h"
#ifndef WITH_NOIDREF

#ifdef __cplusplus
extern "C" {
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_markelement(struct soap*, const void*, int);
SOAP_FMAC3 int SOAP_FMAC4 soap_putelement(struct soap*, const void*, const char*, int, int);
SOAP_FMAC3 void *SOAP_FMAC4 soap_getelement(struct soap*, int*);

#ifdef __cplusplus
}
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_putindependent(struct soap*);
SOAP_FMAC3 int SOAP_FMAC4 soap_getindependent(struct soap*);
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_ignore_element(struct soap*);

SOAP_FMAC3 void * SOAP_FMAC4 soap_instantiate(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 int SOAP_FMAC4 soap_fdelete(struct soap_clist*);
SOAP_FMAC3 void* SOAP_FMAC4 soap_class_id_enter(struct soap*, const char*, void*, int, size_t, const char*, const char*);

SOAP_FMAC3 void* SOAP_FMAC4 soap_container_id_forward(struct soap*, const char*, void*, size_t, int, int, size_t, unsigned int);

SOAP_FMAC3 void SOAP_FMAC4 soap_container_insert(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_byte(struct soap*, char *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_byte(struct soap*, const char*, int, const char *, const char*);
SOAP_FMAC3 char * SOAP_FMAC4 soap_in_byte(struct soap*, const char*, char *, const char*);

#ifndef soap_write_byte
#define soap_write_byte(soap, data) ( soap_begin_send(soap) || soap_put_byte(soap, data, "byte", NULL) || soap_end_send(soap) )
#endif


SOAP_FMAC3 int SOAP_FMAC4 soap_put_byte(struct soap*, const char *, const char*, const char*);

#ifndef soap_read_byte
#define soap_read_byte(soap, data) ( soap_begin_recv(soap) || !soap_get_byte(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 char * SOAP_FMAC4 soap_get_byte(struct soap*, char *, const char*, const char*);

#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_int(struct soap*, int *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_int(struct soap*, const char*, int, const int *, const char*);
SOAP_FMAC3 int * SOAP_FMAC4 soap_in_int(struct soap*, const char*, int *, const char*);

#ifndef soap_write_int
#define soap_write_int(soap, data) ( soap_begin_send(soap) || soap_put_int(soap, data, "int", NULL) || soap_end_send(soap) )
#endif


SOAP_FMAC3 int SOAP_FMAC4 soap_put_int(struct soap*, const int *, const char*, const char*);

#ifndef soap_read_int
#define soap_read_int(soap, data) ( soap_begin_recv(soap) || !soap_get_int(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 int * SOAP_FMAC4 soap_get_int(struct soap*, int *, const char*, const char*);

#ifndef SOAP_TYPE_time
#define SOAP_TYPE_time (10)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_time(struct soap*, time_t *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_time(struct soap*, const char*, int, const time_t *, const char*);
SOAP_FMAC3 time_t * SOAP_FMAC4 soap_in_time(struct soap*, const char*, time_t *, const char*);

#ifndef soap_write_time
#define soap_write_time(soap, data) ( soap_begin_send(soap) || soap_put_time(soap, data, "dateTime", NULL) || soap_end_send(soap) )
#endif


SOAP_FMAC3 int SOAP_FMAC4 soap_put_time(struct soap*, const time_t *, const char*, const char*);

#ifndef soap_read_time
#define soap_read_time(soap, data) ( soap_begin_recv(soap) || !soap_get_time(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 time_t * SOAP_FMAC4 soap_get_time(struct soap*, time_t *, const char*, const char*);

#ifndef SOAP_TYPE_bool
#define SOAP_TYPE_bool (15)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_bool(struct soap*, bool *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_bool(struct soap*, const char*, int, const bool *, const char*);

SOAP_FMAC3S const char* SOAP_FMAC4S soap_bool2s(struct soap*, bool);
SOAP_FMAC3 bool * SOAP_FMAC4 soap_in_bool(struct soap*, const char*, bool *, const char*);

SOAP_FMAC3S int SOAP_FMAC4S soap_s2bool(struct soap*, const char*, bool *);

#ifndef soap_write_bool
#define soap_write_bool(soap, data) ( soap_begin_send(soap) || soap_put_bool(soap, data, "boolean", NULL) || soap_end_send(soap) )
#endif


SOAP_FMAC3 int SOAP_FMAC4 soap_put_bool(struct soap*, const bool *, const char*, const char*);

#ifndef soap_read_bool
#define soap_read_bool(soap, data) ( soap_begin_recv(soap) || !soap_get_bool(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 bool * SOAP_FMAC4 soap_get_bool(struct soap*, bool *, const char*, const char*);

#ifndef SOAP_TYPE_std__string
#define SOAP_TYPE_std__string (9)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_std__string(struct soap*, std::string *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_std__string(struct soap*, const std::string *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_std__string(struct soap*, const char*, int, const std::string*, const char*);
SOAP_FMAC3 std::string * SOAP_FMAC4 soap_in_std__string(struct soap*, const char*, std::string*, const char*);

#ifndef soap_write_std__string
#define soap_write_std__string(soap, data) ( soap_begin_send(soap) || ((data)->soap_serialize(soap), 0) || (data)->soap_put(soap, "string", NULL) || soap_end_send(soap) )
#endif


SOAP_FMAC3 int SOAP_FMAC4 soap_put_std__string(struct soap*, const std::string *, const char*, const char*);

#ifndef soap_read_std__string
#define soap_read_std__string(soap, data) ( soap_begin_recv(soap) || !soap_get_std__string(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 std::string * SOAP_FMAC4 soap_get_std__string(struct soap*, std::string *, const char*, const char*);

#define soap_new_std__string(soap, n) soap_instantiate_std__string(soap, n, NULL, NULL, NULL)


#define soap_delete_std__string(soap, p) soap_delete(soap, p)

SOAP_FMAC1 std::string * SOAP_FMAC2 soap_instantiate_std__string(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_std__string(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (26)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Fault(struct soap*, struct SOAP_ENV__Fault *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Fault(struct soap*, const struct SOAP_ENV__Fault *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Fault(struct soap*, const char*, int, const struct SOAP_ENV__Fault *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Fault * SOAP_FMAC4 soap_in_SOAP_ENV__Fault(struct soap*, const char*, struct SOAP_ENV__Fault *, const char*);

#ifndef soap_write_SOAP_ENV__Fault
#define soap_write_SOAP_ENV__Fault(soap, data) ( soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Fault(soap, data), 0) || soap_put_SOAP_ENV__Fault(soap, data, "SOAP-ENV:Fault", NULL) || soap_end_send(soap) )
#endif


SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Fault(struct soap*, const struct SOAP_ENV__Fault *, const char*, const char*);

#ifndef soap_read_SOAP_ENV__Fault
#define soap_read_SOAP_ENV__Fault(soap, data) ( soap_begin_recv(soap) || !soap_get_SOAP_ENV__Fault(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 struct SOAP_ENV__Fault * SOAP_FMAC4 soap_get_SOAP_ENV__Fault(struct soap*, struct SOAP_ENV__Fault *, const char*, const char*);

#define soap_new_SOAP_ENV__Fault(soap, n) soap_instantiate_SOAP_ENV__Fault(soap, n, NULL, NULL, NULL)


#define soap_delete_SOAP_ENV__Fault(soap, p) soap_delete(soap, p)

SOAP_FMAC1 struct SOAP_ENV__Fault * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_SOAP_ENV__Fault(struct soap*, int, int, void*, size_t, const void*, size_t);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (25)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Reason(struct soap*, const struct SOAP_ENV__Reason *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Reason(struct soap*, const char*, int, const struct SOAP_ENV__Reason *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Reason * SOAP_FMAC4 soap_in_SOAP_ENV__Reason(struct soap*, const char*, struct SOAP_ENV__Reason *, const char*);

#ifndef soap_write_SOAP_ENV__Reason
#define soap_write_SOAP_ENV__Reason(soap, data) ( soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Reason(soap, data), 0) || soap_put_SOAP_ENV__Reason(soap, data, "SOAP-ENV:Reason", NULL) || soap_end_send(soap) )
#endif


SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Reason(struct soap*, const struct SOAP_ENV__Reason *, const char*, const char*);

#ifndef soap_read_SOAP_ENV__Reason
#define soap_read_SOAP_ENV__Reason(soap, data) ( soap_begin_recv(soap) || !soap_get_SOAP_ENV__Reason(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 struct SOAP_ENV__Reason * SOAP_FMAC4 soap_get_SOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *, const char*, const char*);

#define soap_new_SOAP_ENV__Reason(soap, n) soap_instantiate_SOAP_ENV__Reason(soap, n, NULL, NULL, NULL)


#define soap_delete_SOAP_ENV__Reason(soap, p) soap_delete(soap, p)

SOAP_FMAC1 struct SOAP_ENV__Reason * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_SOAP_ENV__Reason(struct soap*, int, int, void*, size_t, const void*, size_t);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (22)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Detail(struct soap*, const struct SOAP_ENV__Detail *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Detail(struct soap*, const char*, int, const struct SOAP_ENV__Detail *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Detail * SOAP_FMAC4 soap_in_SOAP_ENV__Detail(struct soap*, const char*, struct SOAP_ENV__Detail *, const char*);

#ifndef soap_write_SOAP_ENV__Detail
#define soap_write_SOAP_ENV__Detail(soap, data) ( soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Detail(soap, data), 0) || soap_put_SOAP_ENV__Detail(soap, data, "SOAP-ENV:Detail", NULL) || soap_end_send(soap) )
#endif


SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Detail(struct soap*, const struct SOAP_ENV__Detail *, const char*, const char*);

#ifndef soap_read_SOAP_ENV__Detail
#define soap_read_SOAP_ENV__Detail(soap, data) ( soap_begin_recv(soap) || !soap_get_SOAP_ENV__Detail(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 struct SOAP_ENV__Detail * SOAP_FMAC4 soap_get_SOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *, const char*, const char*);

#define soap_new_SOAP_ENV__Detail(soap, n) soap_instantiate_SOAP_ENV__Detail(soap, n, NULL, NULL, NULL)


#define soap_delete_SOAP_ENV__Detail(soap, p) soap_delete(soap, p)

SOAP_FMAC1 struct SOAP_ENV__Detail * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_SOAP_ENV__Detail(struct soap*, int, int, void*, size_t, const void*, size_t);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (20)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Code(struct soap*, const struct SOAP_ENV__Code *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Code(struct soap*, const char*, int, const struct SOAP_ENV__Code *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Code * SOAP_FMAC4 soap_in_SOAP_ENV__Code(struct soap*, const char*, struct SOAP_ENV__Code *, const char*);

#ifndef soap_write_SOAP_ENV__Code
#define soap_write_SOAP_ENV__Code(soap, data) ( soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Code(soap, data), 0) || soap_put_SOAP_ENV__Code(soap, data, "SOAP-ENV:Code", NULL) || soap_end_send(soap) )
#endif


SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Code(struct soap*, const struct SOAP_ENV__Code *, const char*, const char*);

#ifndef soap_read_SOAP_ENV__Code
#define soap_read_SOAP_ENV__Code(soap, data) ( soap_begin_recv(soap) || !soap_get_SOAP_ENV__Code(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 struct SOAP_ENV__Code * SOAP_FMAC4 soap_get_SOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *, const char*, const char*);

#define soap_new_SOAP_ENV__Code(soap, n) soap_instantiate_SOAP_ENV__Code(soap, n, NULL, NULL, NULL)


#define soap_delete_SOAP_ENV__Code(soap, p) soap_delete(soap, p)

SOAP_FMAC1 struct SOAP_ENV__Code * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_SOAP_ENV__Code(struct soap*, int, int, void*, size_t, const void*, size_t);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (19)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Header(struct soap*, struct SOAP_ENV__Header *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Header(struct soap*, const struct SOAP_ENV__Header *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Header(struct soap*, const char*, int, const struct SOAP_ENV__Header *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Header * SOAP_FMAC4 soap_in_SOAP_ENV__Header(struct soap*, const char*, struct SOAP_ENV__Header *, const char*);

#ifndef soap_write_SOAP_ENV__Header
#define soap_write_SOAP_ENV__Header(soap, data) ( soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Header(soap, data), 0) || soap_put_SOAP_ENV__Header(soap, data, "SOAP-ENV:Header", NULL) || soap_end_send(soap) )
#endif


SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Header(struct soap*, const struct SOAP_ENV__Header *, const char*, const char*);

#ifndef soap_read_SOAP_ENV__Header
#define soap_read_SOAP_ENV__Header(soap, data) ( soap_begin_recv(soap) || !soap_get_SOAP_ENV__Header(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 struct SOAP_ENV__Header * SOAP_FMAC4 soap_get_SOAP_ENV__Header(struct soap*, struct SOAP_ENV__Header *, const char*, const char*);

#define soap_new_SOAP_ENV__Header(soap, n) soap_instantiate_SOAP_ENV__Header(soap, n, NULL, NULL, NULL)


#define soap_delete_SOAP_ENV__Header(soap, p) soap_delete(soap, p)

SOAP_FMAC1 struct SOAP_ENV__Header * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_SOAP_ENV__Header(struct soap*, int, int, void*, size_t, const void*, size_t);

#endif

#ifndef SOAP_TYPE_ns1__setSppConfirmation
#define SOAP_TYPE_ns1__setSppConfirmation (18)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__setSppConfirmation(struct soap*, struct ns1__setSppConfirmation *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__setSppConfirmation(struct soap*, const struct ns1__setSppConfirmation *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__setSppConfirmation(struct soap*, const char*, int, const struct ns1__setSppConfirmation *, const char*);
SOAP_FMAC3 struct ns1__setSppConfirmation * SOAP_FMAC4 soap_in_ns1__setSppConfirmation(struct soap*, const char*, struct ns1__setSppConfirmation *, const char*);

#ifndef soap_write_ns1__setSppConfirmation
#define soap_write_ns1__setSppConfirmation(soap, data) ( soap_begin_send(soap) || (soap_serialize_ns1__setSppConfirmation(soap, data), 0) || soap_put_ns1__setSppConfirmation(soap, data, "ns1:setSppConfirmation", NULL) || soap_end_send(soap) )
#endif


SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__setSppConfirmation(struct soap*, const struct ns1__setSppConfirmation *, const char*, const char*);

#ifndef soap_read_ns1__setSppConfirmation
#define soap_read_ns1__setSppConfirmation(soap, data) ( soap_begin_recv(soap) || !soap_get_ns1__setSppConfirmation(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 struct ns1__setSppConfirmation * SOAP_FMAC4 soap_get_ns1__setSppConfirmation(struct soap*, struct ns1__setSppConfirmation *, const char*, const char*);

#define soap_new_ns1__setSppConfirmation(soap, n) soap_instantiate_ns1__setSppConfirmation(soap, n, NULL, NULL, NULL)


#define soap_delete_ns1__setSppConfirmation(soap, p) soap_delete(soap, p)

SOAP_FMAC1 struct ns1__setSppConfirmation * SOAP_FMAC2 soap_instantiate_ns1__setSppConfirmation(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns1__setSppConfirmation(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_ns1__setSppConfirmationResponse
#define SOAP_TYPE_ns1__setSppConfirmationResponse (14)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__setSppConfirmationResponse(struct soap*, struct ns1__setSppConfirmationResponse *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__setSppConfirmationResponse(struct soap*, const struct ns1__setSppConfirmationResponse *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__setSppConfirmationResponse(struct soap*, const char*, int, const struct ns1__setSppConfirmationResponse *, const char*);
SOAP_FMAC3 struct ns1__setSppConfirmationResponse * SOAP_FMAC4 soap_in_ns1__setSppConfirmationResponse(struct soap*, const char*, struct ns1__setSppConfirmationResponse *, const char*);

#ifndef soap_write_ns1__setSppConfirmationResponse
#define soap_write_ns1__setSppConfirmationResponse(soap, data) ( soap_begin_send(soap) || (soap_serialize_ns1__setSppConfirmationResponse(soap, data), 0) || soap_put_ns1__setSppConfirmationResponse(soap, data, "ns1:setSppConfirmationResponse", NULL) || soap_end_send(soap) )
#endif


SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__setSppConfirmationResponse(struct soap*, const struct ns1__setSppConfirmationResponse *, const char*, const char*);

#ifndef soap_read_ns1__setSppConfirmationResponse
#define soap_read_ns1__setSppConfirmationResponse(soap, data) ( soap_begin_recv(soap) || !soap_get_ns1__setSppConfirmationResponse(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 struct ns1__setSppConfirmationResponse * SOAP_FMAC4 soap_get_ns1__setSppConfirmationResponse(struct soap*, struct ns1__setSppConfirmationResponse *, const char*, const char*);

#define soap_new_ns1__setSppConfirmationResponse(soap, n) soap_instantiate_ns1__setSppConfirmationResponse(soap, n, NULL, NULL, NULL)


#define soap_delete_ns1__setSppConfirmationResponse(soap, p) soap_delete(soap, p)

SOAP_FMAC1 struct ns1__setSppConfirmationResponse * SOAP_FMAC2 soap_instantiate_ns1__setSppConfirmationResponse(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns1__setSppConfirmationResponse(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_ns1__getDataForBku
#define SOAP_TYPE_ns1__getDataForBku (13)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__getDataForBku(struct soap*, struct ns1__getDataForBku *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__getDataForBku(struct soap*, const struct ns1__getDataForBku *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__getDataForBku(struct soap*, const char*, int, const struct ns1__getDataForBku *, const char*);
SOAP_FMAC3 struct ns1__getDataForBku * SOAP_FMAC4 soap_in_ns1__getDataForBku(struct soap*, const char*, struct ns1__getDataForBku *, const char*);

#ifndef soap_write_ns1__getDataForBku
#define soap_write_ns1__getDataForBku(soap, data) ( soap_begin_send(soap) || (soap_serialize_ns1__getDataForBku(soap, data), 0) || soap_put_ns1__getDataForBku(soap, data, "ns1:getDataForBku", NULL) || soap_end_send(soap) )
#endif


SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__getDataForBku(struct soap*, const struct ns1__getDataForBku *, const char*, const char*);

#ifndef soap_read_ns1__getDataForBku
#define soap_read_ns1__getDataForBku(soap, data) ( soap_begin_recv(soap) || !soap_get_ns1__getDataForBku(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 struct ns1__getDataForBku * SOAP_FMAC4 soap_get_ns1__getDataForBku(struct soap*, struct ns1__getDataForBku *, const char*, const char*);

#define soap_new_ns1__getDataForBku(soap, n) soap_instantiate_ns1__getDataForBku(soap, n, NULL, NULL, NULL)


#define soap_delete_ns1__getDataForBku(soap, p) soap_delete(soap, p)

SOAP_FMAC1 struct ns1__getDataForBku * SOAP_FMAC2 soap_instantiate_ns1__getDataForBku(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns1__getDataForBku(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef SOAP_TYPE_ns1__getDataForBkuResponse
#define SOAP_TYPE_ns1__getDataForBkuResponse (8)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns1__getDataForBkuResponse(struct soap*, struct ns1__getDataForBkuResponse *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns1__getDataForBkuResponse(struct soap*, const struct ns1__getDataForBkuResponse *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns1__getDataForBkuResponse(struct soap*, const char*, int, const struct ns1__getDataForBkuResponse *, const char*);
SOAP_FMAC3 struct ns1__getDataForBkuResponse * SOAP_FMAC4 soap_in_ns1__getDataForBkuResponse(struct soap*, const char*, struct ns1__getDataForBkuResponse *, const char*);

#ifndef soap_write_ns1__getDataForBkuResponse
#define soap_write_ns1__getDataForBkuResponse(soap, data) ( soap_begin_send(soap) || (soap_serialize_ns1__getDataForBkuResponse(soap, data), 0) || soap_put_ns1__getDataForBkuResponse(soap, data, "ns1:getDataForBkuResponse", NULL) || soap_end_send(soap) )
#endif


SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns1__getDataForBkuResponse(struct soap*, const struct ns1__getDataForBkuResponse *, const char*, const char*);

#ifndef soap_read_ns1__getDataForBkuResponse
#define soap_read_ns1__getDataForBkuResponse(soap, data) ( soap_begin_recv(soap) || !soap_get_ns1__getDataForBkuResponse(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 struct ns1__getDataForBkuResponse * SOAP_FMAC4 soap_get_ns1__getDataForBkuResponse(struct soap*, struct ns1__getDataForBkuResponse *, const char*, const char*);

#define soap_new_ns1__getDataForBkuResponse(soap, n) soap_instantiate_ns1__getDataForBkuResponse(soap, n, NULL, NULL, NULL)


#define soap_delete_ns1__getDataForBkuResponse(soap, p) soap_delete(soap, p)

SOAP_FMAC1 struct ns1__getDataForBkuResponse * SOAP_FMAC2 soap_instantiate_ns1__getDataForBkuResponse(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 void SOAP_FMAC4 soap_copy_ns1__getDataForBkuResponse(struct soap*, int, int, void*, size_t, const void*, size_t);

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (28)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Reason(struct soap*, const char *, int, struct SOAP_ENV__Reason *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Reason ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Reason(struct soap*, const char*, struct SOAP_ENV__Reason **, const char*);

#ifndef soap_write_PointerToSOAP_ENV__Reason
#define soap_write_PointerToSOAP_ENV__Reason(soap, data) ( soap_begin_send(soap) || (soap_serialize_PointerToSOAP_ENV__Reason(soap, data), 0) || soap_put_PointerToSOAP_ENV__Reason(soap, data, "SOAP-ENV:Reason", NULL) || soap_end_send(soap) )
#endif

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *const*, const char*, const char*);

#ifndef soap_read_PointerToSOAP_ENV__Reason
#define soap_read_PointerToSOAP_ENV__Reason(soap, data) ( soap_begin_recv(soap) || !soap_get_PointerToSOAP_ENV__Reason(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 struct SOAP_ENV__Reason ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason **, const char*, const char*);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (27)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Detail(struct soap*, const char *, int, struct SOAP_ENV__Detail *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Detail ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Detail(struct soap*, const char*, struct SOAP_ENV__Detail **, const char*);

#ifndef soap_write_PointerToSOAP_ENV__Detail
#define soap_write_PointerToSOAP_ENV__Detail(soap, data) ( soap_begin_send(soap) || (soap_serialize_PointerToSOAP_ENV__Detail(soap, data), 0) || soap_put_PointerToSOAP_ENV__Detail(soap, data, "SOAP-ENV:Detail", NULL) || soap_end_send(soap) )
#endif

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *const*, const char*, const char*);

#ifndef soap_read_PointerToSOAP_ENV__Detail
#define soap_read_PointerToSOAP_ENV__Detail(soap, data) ( soap_begin_recv(soap) || !soap_get_PointerToSOAP_ENV__Detail(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 struct SOAP_ENV__Detail ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail **, const char*, const char*);

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (21)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Code(struct soap*, const char *, int, struct SOAP_ENV__Code *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Code ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Code(struct soap*, const char*, struct SOAP_ENV__Code **, const char*);

#ifndef soap_write_PointerToSOAP_ENV__Code
#define soap_write_PointerToSOAP_ENV__Code(soap, data) ( soap_begin_send(soap) || (soap_serialize_PointerToSOAP_ENV__Code(soap, data), 0) || soap_put_PointerToSOAP_ENV__Code(soap, data, "SOAP-ENV:Code", NULL) || soap_end_send(soap) )
#endif

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *const*, const char*, const char*);

#ifndef soap_read_PointerToSOAP_ENV__Code
#define soap_read_PointerToSOAP_ENV__Code(soap, data) ( soap_begin_recv(soap) || !soap_get_PointerToSOAP_ENV__Code(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 struct SOAP_ENV__Code ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code **, const char*, const char*);

#endif

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
#endif

#define soap_default__QName(soap, a) soap_default_string(soap, a)


#define soap_serialize__QName(soap, a) soap_serialize_string(soap, a)

SOAP_FMAC3 int SOAP_FMAC4 soap_out__QName(struct soap*, const char*, int, char*const*, const char*);
SOAP_FMAC3 char * * SOAP_FMAC4 soap_in__QName(struct soap*, const char*, char **, const char*);

#ifndef soap_write__QName
#define soap_write__QName(soap, data) ( soap_begin_send(soap) || (soap_serialize__QName(soap, data), 0) || soap_put__QName(soap, data, "byte", NULL) || soap_end_send(soap) )
#endif

SOAP_FMAC3 int SOAP_FMAC4 soap_put__QName(struct soap*, char *const*, const char*, const char*);

#ifndef soap_read__QName
#define soap_read__QName(soap, data) ( soap_begin_recv(soap) || !soap_get__QName(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 char ** SOAP_FMAC4 soap_get__QName(struct soap*, char **, const char*, const char*);

#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_string(struct soap*, char **);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_string(struct soap*, char *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_string(struct soap*, const char*, int, char*const*, const char*);
SOAP_FMAC3 char * * SOAP_FMAC4 soap_in_string(struct soap*, const char*, char **, const char*);

#ifndef soap_write_string
#define soap_write_string(soap, data) ( soap_begin_send(soap) || (soap_serialize_string(soap, data), 0) || soap_put_string(soap, data, "byte", NULL) || soap_end_send(soap) )
#endif

SOAP_FMAC3 int SOAP_FMAC4 soap_put_string(struct soap*, char *const*, const char*, const char*);

#ifndef soap_read_string
#define soap_read_string(soap, data) ( soap_begin_recv(soap) || !soap_get_string(soap, data, NULL, NULL) || soap_end_recv(soap) )
#endif

SOAP_FMAC3 char ** SOAP_FMAC4 soap_get_string(struct soap*, char **, const char*, const char*);

#endif

/* End of soapH.h */
