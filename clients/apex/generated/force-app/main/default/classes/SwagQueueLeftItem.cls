/*
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/**
 * SwagQueueLeftItem
 */
public class SwagQueueLeftItem implements Swagger.MappedProperties {
    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    /**
     * Get actions
     * @return actions
     */
    public List<SwagCauseAction> actions { get; set; }

    /**
     * Get blocked
     * @return blocked
     */
    public Boolean blocked { get; set; }

    /**
     * Get buildable
     * @return buildable
     */
    public Boolean buildable { get; set; }

    /**
     * Get id
     * @return id
     */
    public Integer id { get; set; }

    /**
     * Get inQueueSince
     * @return inQueueSince
     */
    public Integer inQueueSince { get; set; }

    /**
     * Get params
     * @return params
     */
    public String params { get; set; }

    /**
     * Get stuck
     * @return stuck
     */
    public Boolean stuck { get; set; }

    /**
     * Get task
     * @return task
     */
    public SwagFreeStyleProject task { get; set; }

    /**
     * Get url
     * @return url
     */
    public String url { get; set; }

    /**
     * Get why
     * @return why
     */
    public String why { get; set; }

    /**
     * Get cancelled
     * @return cancelled
     */
    public Boolean cancelled { get; set; }

    /**
     * Get executable
     * @return executable
     */
    public SwagFreeStyleBuild executable { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public SwagQueueLeftItem() {
        actions = new List<SwagCauseAction>();
    }

    public static SwagQueueLeftItem getExample() {
        SwagQueueLeftItem queueLeftItem = new SwagQueueLeftItem();
        queueLeftItem.propertyClass = 'aeiou';
        queueLeftItem.actions = new List<SwagCauseAction>{SwagCauseAction.getExample()};
        queueLeftItem.blocked = true;
        queueLeftItem.buildable = true;
        queueLeftItem.id = 123;
        queueLeftItem.inQueueSince = 123;
        queueLeftItem.params = 'aeiou';
        queueLeftItem.stuck = true;
        queueLeftItem.task = SwagFreeStyleProject.getExample();
        queueLeftItem.url = 'aeiou';
        queueLeftItem.why = 'aeiou';
        queueLeftItem.cancelled = true;
        queueLeftItem.executable = SwagFreeStyleBuild.getExample();
        return queueLeftItem;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagQueueLeftItem) {
            SwagQueueLeftItem queueLeftItem = (SwagQueueLeftItem) obj;
            return this.propertyClass == queueLeftItem.propertyClass
                && this.actions == queueLeftItem.actions
                && this.blocked == queueLeftItem.blocked
                && this.buildable == queueLeftItem.buildable
                && this.id == queueLeftItem.id
                && this.inQueueSince == queueLeftItem.inQueueSince
                && this.params == queueLeftItem.params
                && this.stuck == queueLeftItem.stuck
                && this.task == queueLeftItem.task
                && this.url == queueLeftItem.url
                && this.why == queueLeftItem.why
                && this.cancelled == queueLeftItem.cancelled
                && this.executable == queueLeftItem.executable;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        hashCode = (17 * hashCode) + (actions == null ? 0 : System.hashCode(actions));
        hashCode = (17 * hashCode) + (blocked == null ? 0 : System.hashCode(blocked));
        hashCode = (17 * hashCode) + (buildable == null ? 0 : System.hashCode(buildable));
        hashCode = (17 * hashCode) + (id == null ? 0 : System.hashCode(id));
        hashCode = (17 * hashCode) + (inQueueSince == null ? 0 : System.hashCode(inQueueSince));
        hashCode = (17 * hashCode) + (params == null ? 0 : System.hashCode(params));
        hashCode = (17 * hashCode) + (stuck == null ? 0 : System.hashCode(stuck));
        hashCode = (17 * hashCode) + (task == null ? 0 : System.hashCode(task));
        hashCode = (17 * hashCode) + (url == null ? 0 : System.hashCode(url));
        hashCode = (17 * hashCode) + (why == null ? 0 : System.hashCode(why));
        hashCode = (17 * hashCode) + (cancelled == null ? 0 : System.hashCode(cancelled));
        hashCode = (17 * hashCode) + (executable == null ? 0 : System.hashCode(executable));
        return hashCode;
    }
}
