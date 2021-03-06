/* soapcheckVatBindingProxy.h
   Generated by gSOAP 2.8.23 from vies.h

Copyright(C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapcheckVatBindingProxy_H
#define soapcheckVatBindingProxy_H
#include "soapH.h"

class SOAP_CMAC checkVatBindingProxy
{ public:
	struct soap *soap;
	bool soap_own;
	/// Endpoint URL of service 'checkVatBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Variables globally declared in vies.h (non-static)
	/// Constructor
	checkVatBindingProxy();
	/// Constructor to use/share an engine state
	checkVatBindingProxy(struct soap*);
	/// Constructor with endpoint URL
	checkVatBindingProxy(const char *url);
	/// Constructor with engine input+output mode control
	checkVatBindingProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	checkVatBindingProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	checkVatBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor deletes non-shared engine context only (use destroy() to delete deserialized data)
	virtual	~checkVatBindingProxy();
	/// Initializer used by constructors
	virtual	void checkVatBindingProxy_init(soap_mode imode, soap_mode omode);
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to default
	virtual	void reset();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif

	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'checkVat' (returns error code or SOAP_OK)
	virtual	int checkVat(_ns2__checkVat *ns2__checkVat, _ns2__checkVatResponse &ns2__checkVatResponse) { return this->checkVat(NULL, NULL, ns2__checkVat, ns2__checkVatResponse); }
	virtual	int checkVat(const char *endpoint, const char *soap_action, _ns2__checkVat *ns2__checkVat, _ns2__checkVatResponse &ns2__checkVatResponse);

	/// Web service operation 'checkVatApprox' (returns error code or SOAP_OK)
	virtual	int checkVatApprox(_ns2__checkVatApprox *ns2__checkVatApprox, _ns2__checkVatApproxResponse &ns2__checkVatApproxResponse) { return this->checkVatApprox(NULL, NULL, ns2__checkVatApprox, ns2__checkVatApproxResponse); }
	virtual	int checkVatApprox(const char *endpoint, const char *soap_action, _ns2__checkVatApprox *ns2__checkVatApprox, _ns2__checkVatApproxResponse &ns2__checkVatApproxResponse);
};
#endif
