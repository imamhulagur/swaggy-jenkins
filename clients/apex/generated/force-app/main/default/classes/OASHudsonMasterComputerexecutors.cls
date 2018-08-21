/*
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OAS-api/OAS-codegen.git
 * Do not edit the class manually.
 */

/**
 * OASHudsonMasterComputerexecutors
 */
public class OASHudsonMasterComputerexecutors implements OAS.MappedProperties {
    /**
     * Get currentExecutable
     * @return currentExecutable
     */
    public OASFreeStyleBuild currentExecutable { get; set; }

    /**
     * Get idle
     * @return idle
     */
    public Boolean idle { get; set; }

    /**
     * Get likelyStuck
     * @return likelyStuck
     */
    public Boolean likelyStuck { get; set; }

    /**
     * Get r_number
     * @return r_number
     */
    public Integer r_number { get; set; }

    /**
     * Get progress
     * @return progress
     */
    public Integer progress { get; set; }

    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'number' => 'r_number',
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASHudsonMasterComputerexecutors getExample() {
        OASHudsonMasterComputerexecutors hudsonMasterComputerexecutors = new OASHudsonMasterComputerexecutors();
          hudsonMasterComputerexecutors.currentExecutable = OASFreeStyleBuild.getExample();
          hudsonMasterComputerexecutors.idle = true;
          hudsonMasterComputerexecutors.likelyStuck = true;
          hudsonMasterComputerexecutors.r_number = 0;
          hudsonMasterComputerexecutors.progress = 0;
          hudsonMasterComputerexecutors.propertyClass = '';
        return hudsonMasterComputerexecutors;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASHudsonMasterComputerexecutors) {           
            OASHudsonMasterComputerexecutors hudsonMasterComputerexecutors = (OASHudsonMasterComputerexecutors) obj;
            return this.currentExecutable == hudsonMasterComputerexecutors.currentExecutable
                && this.idle == hudsonMasterComputerexecutors.idle
                && this.likelyStuck == hudsonMasterComputerexecutors.likelyStuck
                && this.r_number == hudsonMasterComputerexecutors.r_number
                && this.progress == hudsonMasterComputerexecutors.progress
                && this.propertyClass == hudsonMasterComputerexecutors.propertyClass;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (currentExecutable == null ? 0 : System.hashCode(currentExecutable));
        hashCode = (17 * hashCode) + (idle == null ? 0 : System.hashCode(idle));
        hashCode = (17 * hashCode) + (likelyStuck == null ? 0 : System.hashCode(likelyStuck));
        hashCode = (17 * hashCode) + (r_number == null ? 0 : System.hashCode(r_number));
        hashCode = (17 * hashCode) + (progress == null ? 0 : System.hashCode(progress));
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        return hashCode;
    }
}
