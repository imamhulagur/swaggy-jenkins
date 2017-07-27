package io.swagger.api;

import io.swagger.model.HudsonsecuritycsrfDefaultCrumbIssuer;

import io.swagger.annotations.*;

import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RequestPart;
import org.springframework.web.multipart.MultipartFile;

import java.util.List;

import javax.validation.constraints.*;
import javax.validation.Valid;
@javax.annotation.Generated(value = "io.swagger.codegen.languages.SpringCodegen", date = "2017-07-25T10:46:28.251+10:00")

@Controller
public class CrumbIssuerApiController implements CrumbIssuerApi {



    public ResponseEntity<HudsonsecuritycsrfDefaultCrumbIssuer> getCrumb() {
        // do some magic!
        return new ResponseEntity<HudsonsecuritycsrfDefaultCrumbIssuer>(HttpStatus.OK);
    }

}
