package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import org.apache.cxf.jaxrs.ext.multipart.Attachment;
import org.apache.cxf.jaxrs.ext.multipart.Multipart;

import io.swagger.model.HudsonmodelListView;

import java.util.List;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;

@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaJAXRSCXFCDIServerCodegen", date = "2017-07-25T10:45:05.448+10:00")
public interface ViewApiService {
      public Response getView(String name, SecurityContext securityContext);
      public Response getViewConfig(String name, SecurityContext securityContext);
      public Response postViewConfig(String name, String body, String jenkinsCrumb, SecurityContext securityContext);
}
