=begin comment

Swaggy Jenkins

Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 0.1.0
Contact: blah@cliffano.com
Generated by: https://github.com/swagger-api/swagger-codegen.git

=end comment

=cut

#
# NOTE: This class is auto generated by the swagger code generator program. 
# Do not edit the class manually.
# Ref: https://github.com/swagger-api/swagger-codegen
#
package WWW::SwaggerClient::Object::HudsonmodelFreeStyleBuild;

require 5.6.0;
use strict;
use warnings;
use utf8;
use JSON qw(decode_json);
use Data::Dumper;
use Module::Runtime qw(use_module);
use Log::Any qw($log);
use Date::Parse;
use DateTime;

use base ("Class::Accessor", "Class::Data::Inheritable");


#
#
#
# NOTE: This class is auto generated by the swagger code generator program. Do not edit the class manually.
# REF: https://github.com/swagger-api/swagger-codegen
#

=begin comment

Swaggy Jenkins

Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 0.1.0
Contact: blah@cliffano.com
Generated by: https://github.com/swagger-api/swagger-codegen.git

=end comment

=cut

#
# NOTE: This class is auto generated by the swagger code generator program. 
# Do not edit the class manually.
# Ref: https://github.com/swagger-api/swagger-codegen
#
__PACKAGE__->mk_classdata('attribute_map' => {});
__PACKAGE__->mk_classdata('swagger_types' => {});
__PACKAGE__->mk_classdata('method_documentation' => {}); 
__PACKAGE__->mk_classdata('class_documentation' => {});

# new object
sub new { 
    my ($class, %args) = @_; 

	my $self = bless {}, $class;
	
	foreach my $attribute (keys %{$class->attribute_map}) {
		my $args_key = $class->attribute_map->{$attribute};
		$self->$attribute( $args{ $args_key } );
	}
	
	return $self;
}  

# return perl hash
sub to_hash {
    return decode_json(JSON->new->convert_blessed->encode( shift ));
}

# used by JSON for serialization
sub TO_JSON { 
    my $self = shift;
    my $_data = {};
    foreach my $_key (keys %{$self->attribute_map}) {
        if (defined $self->{$_key}) {
            $_data->{$self->attribute_map->{$_key}} = $self->{$_key};
        }
    }
    return $_data;
}

# from Perl hashref
sub from_hash {
    my ($self, $hash) = @_;

    # loop through attributes and use swagger_types to deserialize the data
    while ( my ($_key, $_type) = each %{$self->swagger_types} ) {
    	my $_json_attribute = $self->attribute_map->{$_key}; 
        if ($_type =~ /^array\[/i) { # array
            my $_subclass = substr($_type, 6, -1);
            my @_array = ();
            foreach my $_element (@{$hash->{$_json_attribute}}) {
                push @_array, $self->_deserialize($_subclass, $_element);
            }
            $self->{$_key} = \@_array;
        } elsif (exists $hash->{$_json_attribute}) { #hash(model), primitive, datetime
            $self->{$_key} = $self->_deserialize($_type, $hash->{$_json_attribute});
        } else {
        	$log->debugf("Warning: %s (%s) does not exist in input hash\n", $_key, $_json_attribute);
        }
    }
  
    return $self;
}

# deserialize non-array data
sub _deserialize {
    my ($self, $type, $data) = @_;
    $log->debugf("deserializing %s with %s",Dumper($data), $type);
        
    if ($type eq 'DateTime') {
        return DateTime->from_epoch(epoch => str2time($data));
    } elsif ( grep( /^$type$/, ('int', 'double', 'string', 'boolean'))) {
        return $data;
    } else { # hash(model)
        my $_instance = eval "WWW::SwaggerClient::Object::$type->new()";
        return $_instance->from_hash($data);
    }
}



__PACKAGE__->class_documentation({description => '',
                                  class => 'HudsonmodelFreeStyleBuild',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    '_class' => {
    	datatype => 'string',
    	base_name => '_class',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'number' => {
    	datatype => 'int',
    	base_name => 'number',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'url' => {
    	datatype => 'string',
    	base_name => 'url',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'actions' => {
    	datatype => 'ARRAY[HudsonmodelCauseAction]',
    	base_name => 'actions',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'building' => {
    	datatype => 'boolean',
    	base_name => 'building',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'description' => {
    	datatype => 'string',
    	base_name => 'description',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'display_name' => {
    	datatype => 'string',
    	base_name => 'displayName',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'duration' => {
    	datatype => 'int',
    	base_name => 'duration',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'estimated_duration' => {
    	datatype => 'int',
    	base_name => 'estimatedDuration',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'executor' => {
    	datatype => 'string',
    	base_name => 'executor',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'full_display_name' => {
    	datatype => 'string',
    	base_name => 'fullDisplayName',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'id' => {
    	datatype => 'string',
    	base_name => 'id',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'keep_log' => {
    	datatype => 'boolean',
    	base_name => 'keepLog',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'queue_id' => {
    	datatype => 'int',
    	base_name => 'queueId',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'result' => {
    	datatype => 'string',
    	base_name => 'result',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'timestamp' => {
    	datatype => 'int',
    	base_name => 'timestamp',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'built_on' => {
    	datatype => 'string',
    	base_name => 'builtOn',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'change_set' => {
    	datatype => 'HudsonscmEmptyChangeLogSet',
    	base_name => 'changeSet',
    	description => '',
    	format => '',
    	read_only => '',
    		},
});

__PACKAGE__->swagger_types( {
    '_class' => 'string',
    'number' => 'int',
    'url' => 'string',
    'actions' => 'ARRAY[HudsonmodelCauseAction]',
    'building' => 'boolean',
    'description' => 'string',
    'display_name' => 'string',
    'duration' => 'int',
    'estimated_duration' => 'int',
    'executor' => 'string',
    'full_display_name' => 'string',
    'id' => 'string',
    'keep_log' => 'boolean',
    'queue_id' => 'int',
    'result' => 'string',
    'timestamp' => 'int',
    'built_on' => 'string',
    'change_set' => 'HudsonscmEmptyChangeLogSet'
} );

__PACKAGE__->attribute_map( {
    '_class' => '_class',
    'number' => 'number',
    'url' => 'url',
    'actions' => 'actions',
    'building' => 'building',
    'description' => 'description',
    'display_name' => 'displayName',
    'duration' => 'duration',
    'estimated_duration' => 'estimatedDuration',
    'executor' => 'executor',
    'full_display_name' => 'fullDisplayName',
    'id' => 'id',
    'keep_log' => 'keepLog',
    'queue_id' => 'queueId',
    'result' => 'result',
    'timestamp' => 'timestamp',
    'built_on' => 'builtOn',
    'change_set' => 'changeSet'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;
