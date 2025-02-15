#include <X11/extensions/Xrandr.h>

#include <stdio.h>


#define PRINT_FUNCTION() fprintf(stderr, "randrdummy: Blocked %s\n", __PRETTY_FUNCTION__)


Bool XRRQueryExtension (Display *dpy,
			int *event_base_return,
			int *error_base_return) {
  PRINT_FUNCTION();

  return False;
}

Status XRRQueryVersion (Display *dpy,
			    int     *major_version_return,
			    int     *minor_version_return) {
  PRINT_FUNCTION();

  *major_version_return = 0;
  *minor_version_return = 0;

  return 0;
}


XRRScreenConfiguration *XRRGetScreenInfo (Display *dpy,
	Drawable draw) {

  PRINT_FUNCTION();

  return NULL;
}

void XRRFreeScreenConfigInfo (
	XRRScreenConfiguration *config) {
  PRINT_FUNCTION();
}

Status XRRSetScreenConfig (Display *dpy,
	XRRScreenConfiguration *config,
	Drawable draw,
	int size_index,
	Rotation rotation,
	Time timestamp) {
  PRINT_FUNCTION();

  return 0;
}

Status XRRSetScreenConfigAndRate (Display *dpy,
				  XRRScreenConfiguration *config,
				  Drawable draw,
				  int size_index,
				  Rotation rotation,
				  short rate,
				  Time timestamp) {
  PRINT_FUNCTION();

  return 0;
}

Rotation XRRConfigRotations(
	XRRScreenConfiguration *config,
	Rotation *current_rotation) {
  PRINT_FUNCTION();

  return 0;
}

Time XRRConfigTimes (
	XRRScreenConfiguration *config,
	Time *config_timestamp) {
  PRINT_FUNCTION();

  return 0;
}

XRRScreenSize *XRRConfigSizes(
	XRRScreenConfiguration *config,
	int *nsizes) {
  PRINT_FUNCTION();

  return NULL;
}

short *XRRConfigRates (
	XRRScreenConfiguration *config,
	int size_index,
	int *nrates) {
  PRINT_FUNCTION();

  return NULL;
}

SizeID XRRConfigCurrentConfiguration (
	XRRScreenConfiguration *config,
	Rotation *rotation) {
  PRINT_FUNCTION();

  return 0;
}

short XRRConfigCurrentRate (
	XRRScreenConfiguration *config) {
  PRINT_FUNCTION();

  return 0;
}

int XRRRootToScreen(
	Display *dpy,
	Window root) {
  PRINT_FUNCTION();

  return 0;
}

void XRRSelectInput(Display *dpy, Window window, int mask) {
  PRINT_FUNCTION();
}

Rotation XRRRotations(
	Display *dpy, int screen,
	Rotation *current_rotation) {
  PRINT_FUNCTION();

  return 0;
}

XRRScreenSize *XRRSizes(Display *dpy,
	int screen, int *nsizes) {
  PRINT_FUNCTION();

  return NULL;
}

short *XRRRates (Display *dpy, int screen,
	int size_index, int *nrates) {
  PRINT_FUNCTION();

  return 0;
}

Time XRRTimes (Display *dpy, int screen, Time *config_timestamp) {
  PRINT_FUNCTION();

  return 0;
}


/* Version 1.2 additions */

Status
XRRGetScreenSizeRange (Display *dpy, Window window,
		       int *minWidth, int *minHeight,
		       int *maxWidth, int *maxHeight) {
  PRINT_FUNCTION();

  return 0;
}

void
XRRSetScreenSize (Display *dpy, Window window,
		  int width, int height,
		  int mmWidth, int mmHeight) {
  PRINT_FUNCTION();
}

XRRScreenResources *
XRRGetScreenResources (Display *dpy, Window window) {
  PRINT_FUNCTION();

  return NULL;
}

void
XRRFreeScreenResources (XRRScreenResources *resources) {
  PRINT_FUNCTION();
}

XRROutputInfo *
XRRGetOutputInfo (Display *dpy, XRRScreenResources *resources, RROutput output) {
  PRINT_FUNCTION();

  return NULL;
}

void
XRRFreeOutputInfo (XRROutputInfo *outputInfo) {
  PRINT_FUNCTION();
}

Atom *
XRRListOutputProperties (Display *dpy, RROutput output, int *nprop) {
  PRINT_FUNCTION();

  return NULL;
}

XRRPropertyInfo *
XRRQueryOutputProperty (Display *dpy, RROutput output, Atom property) {
  PRINT_FUNCTION();

  return NULL;
}

void
XRRConfigureOutputProperty (Display *dpy, RROutput output, Atom property,
			    Bool pending, Bool range, int num_values,
			    long *values) {
  PRINT_FUNCTION();
}

void
XRRChangeOutputProperty (Display *dpy, RROutput output,
			 Atom property, Atom type,
			 int format, int mode,
			 _Xconst unsigned char *data, int nelements) {
  PRINT_FUNCTION();
}

void
XRRDeleteOutputProperty (Display *dpy, RROutput output, Atom property) {
  PRINT_FUNCTION();
}

int
XRRGetOutputProperty (Display *dpy, RROutput output,
		      Atom property, long offset, long length,
		      Bool _delete, Bool pending, Atom req_type,
		      Atom *actual_type, int *actual_format,
		      unsigned long *nitems, unsigned long *bytes_after,
		      unsigned char **prop) {
  PRINT_FUNCTION();

  return 0;
}

XRRModeInfo *
XRRAllocModeInfo (_Xconst char *name, int nameLength) {
  PRINT_FUNCTION();

  return NULL;
}

RRMode
XRRCreateMode (Display *dpy, Window window, XRRModeInfo *modeInfo) {
  PRINT_FUNCTION();

  return 0;
}

void
XRRDestroyMode (Display *dpy, RRMode mode) {
  PRINT_FUNCTION();
}

void
XRRAddOutputMode (Display *dpy, RROutput output, RRMode mode) {
  PRINT_FUNCTION();
}

void
XRRDeleteOutputMode (Display *dpy, RROutput output, RRMode mode) {
  PRINT_FUNCTION();
}

void
XRRFreeModeInfo (XRRModeInfo *modeInfo) {
  PRINT_FUNCTION();
}

XRRCrtcInfo *
XRRGetCrtcInfo (Display *dpy, XRRScreenResources *resources, RRCrtc crtc) {
  PRINT_FUNCTION();
  return NULL;
}

void
XRRFreeCrtcInfo (XRRCrtcInfo *crtcInfo) {
  PRINT_FUNCTION();
}

Status
XRRSetCrtcConfig (Display *dpy,
		  XRRScreenResources *resources,
		  RRCrtc crtc,
		  Time timestamp,
		  int x, int y,
		  RRMode mode,
		  Rotation rotation,
		  RROutput *outputs,
		  int noutputs) {
  PRINT_FUNCTION();

  return 0;
}

int
XRRGetCrtcGammaSize (Display *dpy, RRCrtc crtc) {
  PRINT_FUNCTION();

  return 0;
}

XRRCrtcGamma *
XRRGetCrtcGamma (Display *dpy, RRCrtc crtc) {
  PRINT_FUNCTION();

  return NULL;
}

XRRCrtcGamma *
XRRAllocGamma (int size) {
  PRINT_FUNCTION();

  return NULL;
}

void
XRRSetCrtcGamma (Display *dpy, RRCrtc crtc, XRRCrtcGamma *gamma) {
  PRINT_FUNCTION();
}

void
XRRFreeGamma (XRRCrtcGamma *gamma) {
  PRINT_FUNCTION();
}

/* Version 1.3 additions */

XRRScreenResources *
XRRGetScreenResourcesCurrent (Display *dpy, Window window) {
  PRINT_FUNCTION();

  return NULL;
}

void
XRRSetCrtcTransform (Display	*dpy,
		     RRCrtc	crtc,
		     XTransform	*transform,
		     _Xconst char *filter,
		     XFixed	*params,
		     int	nparams) {
  PRINT_FUNCTION();
}

/*
 * Get current crtc transforms and filters.
 * Pass *attributes to XFree to free
 */
Status
XRRGetCrtcTransform (Display	*dpy,
		     RRCrtc	crtc,
		     XRRCrtcTransformAttributes **attributes) {
  PRINT_FUNCTION();
  
  return 0;
}

/*
 * intended to take RRScreenChangeNotify,  or
 * ConfigureNotify (on the root window)
 * returns 1 if it is an event type it understands, 0 if not
 */
int XRRUpdateConfiguration(XEvent *event) {
  PRINT_FUNCTION();

  return 0;
}

XRRPanning *
XRRGetPanning (Display *dpy, XRRScreenResources *resources, RRCrtc crtc) {
  PRINT_FUNCTION();

  return NULL;
}

void
XRRFreePanning (XRRPanning *panning) {
  PRINT_FUNCTION();
}

Status
XRRSetPanning (Display *dpy,
	       XRRScreenResources *resources,
	       RRCrtc crtc,
	       XRRPanning *panning) {
	PRINT_FUNCTION();

	return 0;
}

void
XRRSetOutputPrimary(Display *dpy,
		    Window window,
		    RROutput output) {
  PRINT_FUNCTION();
}

RROutput
XRRGetOutputPrimary(Display *dpy,
		    Window window) {
  PRINT_FUNCTION();

  return 0;
}

XRRProviderResources *
XRRGetProviderResources(Display *dpy, Window window) {
  PRINT_FUNCTION();

  return NULL;
}

void
XRRFreeProviderResources(XRRProviderResources *resources) {
  PRINT_FUNCTION();
}

XRRProviderInfo *
XRRGetProviderInfo(Display *dpy, XRRScreenResources *resources, RRProvider provider) {
  PRINT_FUNCTION();
  
  return NULL;
}

void
XRRFreeProviderInfo(XRRProviderInfo *provider) {
  PRINT_FUNCTION();
}

int
XRRSetProviderOutputSource(Display *dpy, XID provider, XID source_provider) {
  PRINT_FUNCTION();

  return 0;
}

int
XRRSetProviderOffloadSink(Display *dpy, XID provider, XID sink_provider) {
  PRINT_FUNCTION();

  return 0;
}

Atom *
XRRListProviderProperties (Display *dpy, RRProvider provider, int *nprop) {
  PRINT_FUNCTION();

  return NULL;
}

XRRPropertyInfo *
XRRQueryProviderProperty (Display *dpy, RRProvider provider, Atom property) {
  PRINT_FUNCTION();

  return NULL;
}

void
XRRConfigureProviderProperty (Display *dpy, RRProvider provider, Atom property,
			    Bool pending, Bool range, int num_values,
			    long *values) {
  PRINT_FUNCTION();
}
			
void
XRRChangeProviderProperty (Display *dpy, RRProvider provider,
			 Atom property, Atom type,
			 int format, int mode,
			 _Xconst unsigned char *data, int nelements) {
  PRINT_FUNCTION();
}

void
XRRDeleteProviderProperty (Display *dpy, RRProvider provider, Atom property) {
  PRINT_FUNCTION();
}

int
XRRGetProviderProperty (Display *dpy, RRProvider provider,
			Atom property, long offset, long length,
			Bool _delete, Bool pending, Atom req_type,
			Atom *actual_type, int *actual_format,
			unsigned long *nitems, unsigned long *bytes_after,
			unsigned char **prop) {
  PRINT_FUNCTION();
  
  return 0;
}

XRRMonitorInfo *
XRRAllocateMonitor(Display *dpy, int noutput) {
  PRINT_FUNCTION();

  return NULL;
}

XRRMonitorInfo *
XRRGetMonitors(Display *dpy, Window window, Bool get_active, int *nmonitors) {
  PRINT_FUNCTION();

  return NULL;
}

void
XRRSetMonitor(Display *dpy, Window window, XRRMonitorInfo *monitor) {
  PRINT_FUNCTION();
}

void
XRRDeleteMonitor(Display *dpy, Window window, Atom name) {
  PRINT_FUNCTION();
}

void
XRRFreeMonitors(XRRMonitorInfo *monitors) {
  PRINT_FUNCTION();
}

