package io.swagger.api.factories;

import io.swagger.api.CrumbIssuerApiService;
import io.swagger.api.impl.CrumbIssuerApiServiceImpl;

@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaResteasyServerCodegen", date = "2017-07-25T10:45:08.057+10:00")
public class CrumbIssuerApiServiceFactory {

   private final static CrumbIssuerApiService service = new CrumbIssuerApiServiceImpl();

   public static CrumbIssuerApiService getCrumbIssuerApi()
   {
      return service;
   }
}
