package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import org.glassfish.jersey.media.multipart.FormDataContentDisposition;

import io.swagger.model.HudsonmodelListView;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;
import javax.validation.constraints.*;
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaJerseyServerCodegen", date = "2017-07-25T10:45:00.143+10:00")
public abstract class ViewApiService {
    public abstract Response getView(String name,SecurityContext securityContext) throws NotFoundException;
    public abstract Response getViewConfig(String name,SecurityContext securityContext) throws NotFoundException;
    public abstract Response postViewConfig(String name,String body,String jenkinsCrumb,SecurityContext securityContext) throws NotFoundException;
}
